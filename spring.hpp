#ifndef SPRING_HPP
# define SPRING_HPP

# include <vector>

class spring
{
    private:
        double _k;
        double _m;
    public:
        spring();
        spring(double k, double _m = 1);
        double getK();
        std::vector<double> move(double t, double dt, double x0, double v0);
        std::vector<double> move(double t, double dt, double x0);
        std::vector<double> move(double t0, double t1, double dt, double x0, double v0);
        std::vector<double> move(double t0, double t1, double dt, double x0, double v0, double m);
        spring inSeries(const spring &other);
        spring inParallel(const spring &other);
        double getOmega();
    private:
        void setK(double k);
};

#endif