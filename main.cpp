#include <iostream>

unsigned long long factorial(unsigned int n)
{
    unsigned long long result = 1;

    for(unsigned int i = 1; i <= n; i++)
        result *= i;

    return result;
}

unsigned long long fib(unsigned int n)
{
    if(n <= 2)
        return 1;

    unsigned long long prev = 1, preprev = 1, cur;

    for(unsigned int i = 3; i <= n; i++)
    {
        cur = prev + preprev;

        preprev = prev;
        prev = cur;
    }

    return cur;
}

template <typename T>
T sum_a(unsigned int n, T a, T d)
{
    T sum = 0;

    for(int i = 1; i <= n; i++)
        sum += a, a += d;

    return sum;
}

template <typename T>
T sum_g(unsigned int n, T b, T q)
{
    T sum = 0;

    for(int i = 1; i <= n; i++)
        sum += b, b *= q;

    return sum;
}

int main()
{
    std::cout << factorial(5) << std::endl;
    std::cout << fib(5) << std::endl;
    std::cout << sum_a(5, 1, 1) << std::endl;
    std::cout << sum_g(5, 1, 2) << std::endl;

    return 0;
}
