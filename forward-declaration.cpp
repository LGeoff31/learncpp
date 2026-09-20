#include <iostream>

int add(int a, int b); // forward declaration
int add(int a);

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3) << std::endl;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a)
{
    return a;
}