#pragma once

#include "Vec2.hpp"

class Particle {

  public:
  // Terminal Dimensions
  inline static int screenWidth = 0;
  inline static int screenHeight = 0;
  // Simulation Dimensions
  inline static Vec2 simulationDimension;
  // Return cell hash for given coords
  static int getCellHash(Vec2 coords);

  Particle() = default;

  Particle(Vec2 startPosition, Vec2 startVelocity, float startMass = 1.0f) {
    position = startPosition;
    velocity = startVelocity;
    mass = startMass;
  }


  public:
  Vec2 position;
  Vec2 velocity;
  float mass = 1.0f;
  int cellHash = -1;

  public:

  void tick();

  void updateCellHash();

  void applyForce(Vec2 force);

  void applyVelocity();


};

