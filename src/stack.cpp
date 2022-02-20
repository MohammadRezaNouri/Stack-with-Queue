#include <iostream> // For invalid_argument

#include "stack.h"

bool stack::isEmpty()
{
    if (q1.empty())
    {
        return true;
    }
    return false;
}

void stack::push(int d)
{
    q1.push(d);
}

int stack::pop()
{
    if (q1.empty())
    {
        throw std::invalid_argument("Stack is empty!");
    }
    int temp = q1.back();
    if (q1.size() == 1)
    {
        q1.pop();
        return temp;
    }
    while (q1.size() != 1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    q1.pop();
    while (q2.size() != 0)
    {
        q1.push(q2.front());
        q2.pop();
    }
    return temp;
}