#ifndef SPRINGARRAY_HPP
# define SPRINGARRAY_HPP

# include "spring.hpp"
# include <string>
# include <vector>

class springArray
{
    public:
        static spring equivalentSpring(const std::string &springExpr);
        static spring equivalentSpring(const std::string &springExpr, std::vector<double> springs);
};

#endif