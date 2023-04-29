#ifndef CONVERTERFLOAT_HPP
# define CONVERTERFLOAT_HPP

# include "converter.hpp"

class converterFloat: public converter
{
    public:
        converterFloat(double t1, double x0, double v0, double t0 = 0, double dt = 1, double m = 1, double omega = 1);
        ~converterFloat();
        std::string system_of_springs(const std::string &bits);
        double binary_to_decimal(std::string binary);
        std::string system_of_springs(const std::string &bits, std::string opening, std::string closing);
};

#endif