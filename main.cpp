#include "spring.hpp" 
#include <iostream>

int main()
{
    spring spr1(5);
    spring spr2(6);

    spring sprSeries = spr1.inSeries(spr2);
    spring sprParallel = spr1.inParallel(spr2);

    std::cout << "In series: " << sprSeries.getK() << std::endl;
    std::cout << "In parallel: " << sprParallel.getK() << std::endl;
}