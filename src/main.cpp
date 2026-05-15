#include "drawOcean.hpp"
#include <chrono>
#include <ftxui/ftxui.hpp>
#include <iostream>
#include <random>
#include <thread>
#include "DrawGravity.hpp"

using namespace std;

void runLoop() {

  int initial_value = 5;

  int ocean_height = initial_value;

  Particle particle{
      .position = {10.0f, 0.0f}, // Vec2 with x, y
      .velocity = {0.0f, 0.0f},  // Vec2 with x, y
  };

  while (true) {

    auto screen = ftxui::Screen::Create(
        ftxui::Dimension::Full(), // Use full terminal width
        ftxui::Dimension::Full());

    random_device rd;                        // Non-deterministic seed
    mt19937 gen(rd());                       // Standard mersenne_twister_engine
    uniform_int_distribution<> distr(-1, 1); // Range [-1, 1]
    int walk_value = distr(gen);

    ocean_height += walk_value;

    // drawOcean(screen, ocean_height);

    DrawGravity(screen, particle);

    cout << screen.ToString();
    cout << flush;

    this_thread::sleep_for(chrono::milliseconds(100));

    cout << screen.ResetPosition(/*clear*/ true);
  }
}

int main() {

  runLoop();

  return 0;
}