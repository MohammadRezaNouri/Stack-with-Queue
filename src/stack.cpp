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