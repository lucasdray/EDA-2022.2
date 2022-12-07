#include <stdio.h>

long long int fib[81];
long int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;

    if (fib[n] != 0)
        return fib[n];

    fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib[n];
}