#include "ParticleSystem.hpp"

class SimulationApp {

public:
    void run();
    void stop();
    void reset();

void SimulationApp::run() {
  bool running = true;
  // Reset state
 
  // Run game loop

    // Render loop
    // Physics loop (Call ParticleSystem.tick)


  int initial_value = 5;

  int ocean_height = initial_value;

  Particle particle({10.0f, 0.0f},{0.0f, 0.0f});

  // TODO: Make the particle store state in the ParticleData object

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

void SimulationApp::stop() {
  bool running = false;
}



ParticleData particleData;

double physicsAccumulator = 0.0;
double renderAccumulator = 0.0;

void updatePhysics(double deltaTime);
void renderFrame();


