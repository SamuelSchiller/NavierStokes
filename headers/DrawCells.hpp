#pragma once

#include "Particle.hpp"
#include <ftxui/screen/screen.hpp>

struct CellStats {
  // Location is here just in case, might not be needed in a later implementation.
  int x = 0;
  int y = 0;
  int particleCount = 0;
  float averageSpeed = 0.0f;
};

// Cells are the terminal characters, operating on the terminal window size
// Particles operate on a more precise coordinate system, from the simulation backend.
// Screen has the screenDimension ParticleData has the simulationDimension

// Flexible item to actually draw the cells to the screen
void drawCells(ftxui::Screen &screen, const ParticleData& particleData);

// Update the screen object based on the simulation's particle data
void updateScreen(ftxui::Screen &screen, const ParticleData& particleData);

// Update the cells based on cell stats
void updateCell(ftxui::Cell& cell, const CellStats& stats);

// Calculate a single cellStats based on most recent particleData
CellStats calculateCellStats(const ParticleData& cellParticleData);

