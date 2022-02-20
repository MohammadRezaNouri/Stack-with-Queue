#include <iostream> // For cout
#include <string>   // For cout string
#include "stack.h"  // For stack class

void my()
{
    std::cout << "My test case : \n";
    stack s;
    if (s.isEmpty())
        std::cout << "Yes, your stack is empty\n";
    else
        std::cout << "No, your stack is not empty\n";
    try
    {
        s.pop();
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    try
    {
        std::cout << "popped : " << s.pop() << "\n";
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
    s.push(9);
    try
    {
        for (int i = 0; i < 6; i++)
        {
            int temp = s.pop();
            std::cout << "popped : " << temp << "\n";
        }
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void you()
{
    std::cout << "Your test case : \n";
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    try
    {
        std::cout << s.pop() << " popped from stack\n";
        std::cout << "Top element is : " << s.peek() << "\n";
    }
    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void dr()
{
    std::cout << "Dr. test case : \n";
    stack s;
    std::string str = "(((a+b)*c+d-e)/(f+g)-(h+j)*(k-l))/(m-n)";
    bool Bool = false;
    int temp;
    try
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
                s.push(i);
            else if (str[i] == ')')
            {
                temp = s.pop();
                std::cout << "(" << temp << "-" << i << ")\n";
            }
        }
    }
    catch (const std::invalid_argument &e)
    {
        Bool = true;
    }
    if (!s.isEmpty() || Bool)
        std::cout << "The " << str << " is wrong :(\n";
    else
        std::cout << "The \"" << str << "\" is correct :)\n";
}

int main()
{
    printf("\n");
    my();
    printf("\n");
    you();
    printf("\n");
    dr();
    printf("Press enter to exit...");
    getchar();
    return 0;
}