#include "Sensor.h"
#include <random>
using namespace std;

Sensor::Sensor(double noise) : noise_std(noise){}

pair<double, double> Sensor::observe(const Target& target){
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<> dist(0.0 noise_std);

    return {target.x + dist(gen), target.y + dist(gen)};
}