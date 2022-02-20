#ifndef STACK_H
#define STACK_H

#include <queue>

class stack
{
private:
    std::queue<int> q1, q2;
public:
    bool isEmpty();
    void push(int);
    int pop();
    int peek();
};

#endif