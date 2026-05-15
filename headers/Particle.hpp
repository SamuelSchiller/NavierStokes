#pragma once

#include "Vec2.hpp"

struct Particle {

    Vec2 position;
    Vec2 velocity;
    float mass = 1;
    
};

void applyVelocity(Particle& particle); 

void applyVelocity(Particle& particle, Vec2 velocity); 

void applyForce(Particle& particle, Vec2 force);

void update(Particle& particle);

