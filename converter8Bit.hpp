#ifndef CONVERTER8BIT_HPP
# define CONVERTER8BIT_HPP

#include "converter.hpp"

class converter8Bit: public converter
{
    public:
        converter8Bit(double t0, double t1, double dt, double x0, double v0, double m, double omega);
        ~converter8Bit();
        std::string system_of_springs(const std::string &bits);
        int binary_to_decimal(std::string binary);
};

#endif 