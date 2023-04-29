#ifndef CONVERTER8BIT_HPP
# define CONVERTER8BIT_HPP

#include "converter.hpp"

class converter8Bit: public converter
{
    public:
        converter8Bit(double t1, double x0, double v0, double t0 = 0, double dt = 1, double m = 1, double omega = 1);
        ~converter8Bit();
        std::string system_of_springs(const std::string &bits);
        double binary_to_decimal(std::string binary);
};

#endif 