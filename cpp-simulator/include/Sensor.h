#ifdef SENSOR_H
#define SENSOR_H

#include "Target.h"
#include <utility>
using namespace std;

class Sensor {
public:
    double noise_std;

    Sensor(double noise);
    pair<double,double> observe(const Target& target); // returns a pair 
};

#endif