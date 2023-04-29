#ifndef ACONVERTER_HPP
# define ACONVERTER_HPP

# include <string>
# include "spring.hpp"
# include "springArray.hpp"
# include "ft.hpp"

class converter
{
    public:
        double t0;
        double t1;
        double dt;
        double x0;
        double v0;
        double m;
        double omega;

    public:
        converter(double t0, double t1, double dt, double x0, double v0, double m = 1, double omega = 1);
        virtual ~converter();
        virtual std::string system_of_springs(const std::string &bits) = 0;
        std::vector<double> compute_oscilations(const std::string &springExpr);
        int ampl_i(std::vector<double> coords);
        virtual int binary_to_decimal(std::string binary) = 0;
};

# endif