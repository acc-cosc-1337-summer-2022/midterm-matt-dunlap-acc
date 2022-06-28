#include "question4.h"

bool test_config()
{
    return true;
}

double get_kinetic_energy(double mass, double velocity){
    double kinetic_energy = .5 * mass * (velocity * velocity);
    return kinetic_energy;
}