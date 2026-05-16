#include "Particle.hpp"

int Particle::getCellHash(Vec2 coords) {

  // Invalid terminal size, return -1
  if (screenWidth <= 0 || screenHeight <= 0) {
    return -1;
  }

  int cellX = static_cast<int>((coords.x / simulationDimension.x) * screenWidth);
  int cellY = static_cast<int>((coords.y / simulationDimension.y) * screenHeight);

  // Out of bounds, return -1
  if (cellX < 0 || cellX >= screenWidth) return -1;
  if (cellY < 0 || cellY >= screenHeight) return -1;

  // Unique hash = the cell's position
  return cellY * screenWidth + cellX;

}

void Particle::updateCellHash() {
  cellHash = getCellHash(position);
}

void Particle::applyVelocity() {
  position += velocity;
}

// Add a force to the velocity
void Particle::applyForce(Vec2 force) {
  velocity += force / mass;
}

// Update the particle
void Particle::tick() {
  applyVelocity();
  updateCellHash();
}
