#include "converter.hpp"

converter::converter(double t0, double t1, double dt, double x0, double v0, double m, double omega): t0(t0), t1(t1), dt(dt), x0(x0), v0(v0), m(m), omega(omega) {}

converter::~converter() {}

std::vector<double> converter::compute_oscilations(const std::string &springExpr)
{
    spring s = springArray::equivalentSpring(springExpr);

    return s.move(t0, t1, dt, x0, v0, m);
}

int converter::ampl_i(std::vector<double> coords)
{
    return ft::find_ampl_i(coords, dt, 1000);
}



