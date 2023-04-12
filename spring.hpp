#ifndef SPRING_HPP
# define SPRING_HPP

# include <vector>

class spring
{
    private:
        double _k;
    public:
        spring();
        spring(double k);
        double getK();
        std::vector<double> move(double t, double dt, double x0, double v0);
        std::vector<double> move(double t, double dt, double x0);
        std::vector<double> move(double t0, double t1, double dt, double x0, double v0);
        std::vector<double> move(double t0, double t1, double dt, double x0, double v0, double m);
    private:
        void setK(double k);
};

#endif