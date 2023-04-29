#ifndef CONVERTERFLOAT_HPP
# define CONVERTERFLOAT_HPP

# include "converter.hpp"

class converterFloat: public converter
{
    public:
        converterFloat(double t0, double t1, double dt, double x0, double v0, double m, double omega);
        ~converterFloat();
        std::string system_of_springs(const std::string &bits);
        int binary_to_decimal(std::string binary);
        std::string converterFloat::system_of_springs(const std::string &bits, char opening, char closing, size_t i);
};

#endif