#include "Particle.hpp"

void applyVelocity(Particle& particle) {

    particle.position += particle.velocity;

}

void applyVelocity(Particle& particle, Vec2 velocity) {

    particle.velocity = velocity;

    particle.position += particle.velocity;

}

void applyForce(Particle& particle, Vec2 force) {

  particle.velocity += force;

}

void update(Particle& particle);
