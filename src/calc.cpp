#include "calc.h"

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int divide(int x, int y)
{
    return x / y;
}

int multiply(int x, int y)
{
    return x * y;
}

int power(int x, int y)
{
    int total = 1;
    for (int num = 0; num < y; num++)
    {
        total = total * x;
    }
    return total;
}