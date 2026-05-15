#include "DrawGravity.hpp"
#include "Particle.hpp"
#include <ftxui/screen/screen.hpp>

void DrawGravity(ftxui::Screen &screen, Particle &particle) {

  Vec2 gravityVector = {0.0f, 0.01f};
  applyForce(particle, gravityVector);
  applyVelocity(particle);

  auto &pixel = screen.PixelAt((int)particle.position.x, (int)particle.position.y);
  pixel.character = "7";
  pixel.background_color = ftxui::Color::Black;
  pixel.foreground_color = ftxui::Color::Blue;
  pixel.bold = true;
}