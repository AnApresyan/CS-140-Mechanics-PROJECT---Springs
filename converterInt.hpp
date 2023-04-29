#ifndef CONVERTERINT_HPP
# define CONVERTERINT_HPP

# include "converter.hpp"


class converterInt: public converter
{
    public:
        converterInt(double t0, double t1, double dt, double x0, double v0, double m, double omega);
        ~converterInt();
        std::string system_of_springs(const std::string &bits);
        double binary_to_decimal(std::string binary);
};

#endif