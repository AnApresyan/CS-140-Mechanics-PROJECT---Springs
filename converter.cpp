#include "converter.hpp"

converter::converter(double t1, double x0, double v0, double t0, double dt, double m, double omega): t0(t0), t1(t1), dt(dt), x0(x0), v0(v0), m(m), omega(omega) {}

converter::~converter() {}

std::vector<double> converter::compute_oscilations(const std::string &springExpr)
{
    spring s = springArray::equivalentSpring(springExpr);
    std::cout << "Stiffness: " << s.getK() << std::endl;

    std::cout << "t0 : " << t0 << std::endl;
    std::cout << "t1 : " << t1 << std::endl;
    std::cout << "dt : " << dt << std::endl;
    std::cout << "x0 : " << x0 << std::endl;
    std::cout << "v0 : " << v0 << std::endl;
    std::cout << "m : " << m << std::endl;

    // std::vector<double> x = s.move(t0, t1, dt, x0, v0, m);
    // for (std::vector<double>::iterator it = x.begin(); it != x.end(); it++)
    //     std::cout << *it << std::endl;
    return s.move(t0, t1, dt, x0, v0, m);
}

int converter::ampl_i(std::vector<double> coords)
{
    return ft::find_ampl_i(coords, dt, 1000);
}



