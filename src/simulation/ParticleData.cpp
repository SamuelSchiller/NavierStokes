#include "Vec2.hpp"
#include "Particle.hpp"
#include <vector>

class ParticleData {
  vector<Particle> particles;
  Vec2 simulationDimension;
  
  // [TODO] Needs a way to look up collections of particles via cell coords
 
  // Fetch the particles in a given cell
  // [TODO] Particles in particle data contain a hash for the cell they are located in.

  vector<Particle> getCellParticleData(Vec2 cellCoords, const ParticleData& cellParticleData);

  changeSimulationDimension;
};


  
