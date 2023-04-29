#include "springArray.hpp"

spring springArray::equivalentSpring(const std::string &springExpr) 
{
    std::stack<spring> stack;
    for (int i = 0; i < springExpr.length(); i++) {
        char c = springExpr[i];
        if (c == '{' || c == '[')
            stack.push(spring());
        else if (c == '}') {
            spring s = stack.top();
            stack.pop();
            if (stack.empty())
                return s;
            else 
            {
                spring &top = stack.top();
                top = top.inSeries(s);
            }
        } 
        else if (c == ']')
        {
            spring s = stack.top();
            stack.pop();
            if (stack.empty())
                return s;
            else 
            {
                spring &top = stack.top();
                top = top.inParallel(s);
            }
        }
    }
    return spring();
}

spring springArray::equivalentSpring(const std::string &springExpr, spring springs[])
{
    std::stack<spring> seriesStack;
    for (int i = 0; i < springExpr.size(); i++)
    {
        char c = springExpr[i];
        if (c == '[')
            seriesStack.push(spring());
        else if (c == '{')
            seriesStack.push(springs[i]);
        else if (c == ']')
        {
            spring s1 = seriesStack.top();
            seriesStack.pop();
            spring s2 = seriesStack.top();
            seriesStack.pop();
            seriesStack.push(s2.inParallel(s1));
        }
        else if (c == '}')
            seriesStack.top().inSeries(springs[i]);
    }
    return seriesStack.top();
}
