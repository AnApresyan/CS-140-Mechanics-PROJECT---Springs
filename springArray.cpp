#include "springArray.hpp"

spring springArray::equivalentSpring(const std::string &springExpr) 
{
    size_t i = 0;

    std::stack<char> s;
    return springArray::inParallel(springs(springExpr, s, i));
}

std::vector<spring> springArray::springs(const std::string &str, std::stack<char> s, size_t &i)
{
    std::vector<spring> springs;
    for (; i < str.length(); i++)
    {
        if (str[i] == '[')
        {
            s.push(str[i]);
            i++;
            springs.push_back(inParallel(springArray::springs(str, s, i)));
            continue;
        }
        else if (str[i] == '{')
        {
            s.push(str[i]);
            i++;
            springs.push_back(inSeries(springArray::springs(str, s, i)));
            continue;
        }
        else if (str[i] == ']' && s.top() == '[')
        {
            s.pop();
            return springs;
        }
        else if (str[i] == '}' && s.top() == '{')
        {
            s.pop();
            return springs;
        }
    }
    return springs;
}

spring springArray::inParallel(std::vector<spring> springs)
{
    if (springs.empty())
        return spring();
    double k = 0;

    for (spring s: springs)
        k += s.getK();
    return (spring(k));
}

spring springArray::inSeries(std::vector<spring> springs)   //to be implemented later
{
    if (springs.empty())
        return spring();
    
    double k = 0;
    for (spring s: springs)
        k += 1/s.getK();
    return (spring(1/k));
}

spring springArray::equivalentSpring(const std::string &springExpr, spring springs[])
{
    return NULL;
}
