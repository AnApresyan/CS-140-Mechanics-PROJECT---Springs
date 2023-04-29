#ifndef FT_HPP
# define FT_HPP

# include <vector>
# include <math.h>
# include <iostream>

class ft
{
    public:
        static double ak(std::vector<double> coords, double omega, double dt, int j, int N);
        static double bk(std::vector<double> coords, double omega, double dt, int j, int N);
        static int find_ampl_i(std::vector<double> coords, double dt, int N = 1000, double omega = 1);
};

#endif