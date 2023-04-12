#include "spring.hpp"

spring::spring(): _k(1) {}

spring::spring(double k): _k(k) {}

double spring::getK()
{
    return _k;
}

void spring::setK(double k)
{
    _k = k;
}

std::vector<double> spring::move(double t, double dt, double x0, double v0)
{

}

std::vector<double> spring::move(double t, double dt, double x0)
{

}

std::vector<double> spring::move(double t0, double t1, double dt, double x0, double v0)
{

}
std::vector<double> spring::move(double t0, double t1, double dt, double x0, double v0, double m)
{
    
}

