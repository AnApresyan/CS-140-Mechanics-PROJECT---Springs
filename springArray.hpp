#ifndef SPRINGARRAY_HPP
# define SPRINGARRAY_HPP

# include "spring.hpp"
# include <string>
# include <vector>
# include <stack>

class springArray
{
    public:
        static spring equivalentSpring(const std::string &springExpr);
        static spring equivalentSpring(const std::string &springExpr, spring springs[]);
        static std::vector<spring> springs(const std::string &stringExpr, std::stack<char> s, size_t &i);
        static spring inParallel(std::vector<spring> springs);
        static spring inSeries(std::vector<spring> springs);
};

#endif