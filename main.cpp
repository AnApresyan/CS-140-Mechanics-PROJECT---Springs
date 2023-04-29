#include "spring.hpp" 
#include <iostream>
#include "springArray.hpp"
#include "ft.hpp"
#include "converter8Bit.hpp"

int main()
{
    // spring spr1(5);
    // spring spr2(6);

    // spring sprSeries = spr1.inSeries(spr2);
    // spring sprParallel = spr1.inParallel(spr2);

    // std::cout << "In series: " << sprSeries.getK() << std::endl;
    // std::cout << "In parallel: " << sprParallel.getK() << std::endl;

    // spring s = springArray::equivalentSpring("[][][]");

    // std::cout << "Stiffness of s: " << s.getK() << std::endl;


    // std::vector<double> v;

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // double dt = 1;
    // double N = 3;

    // ft::find_ampl_i(v, N, dt);


    // std::cout << springArray::equivalentSpring("{{}{}[[][]]}").getK(); 
    converter8Bit converter(500, 1000, 0);

    std::cout << converter.binary_to_decimal("10001011");
}