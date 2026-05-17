#pragma once

#include "ParticleSystem.hpp"
#include "ParticleData.hpp"
#include <ftxui/screen/screen.hpp>
#include <chrono>

class SimulationApp {
public:
    void run();
    void stop();
    void reset();

    bool running = false;

private:
    ParticleData particleData;

    double physicsAccumulator = 0.0;
    double renderAccumulator = 0.0;

    std::chrono::steady_clock::time_point previousTime;

    void updatePhysics(double deltaTime);
    void renderFrame();
};
