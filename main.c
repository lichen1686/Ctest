#include <stdio.h>

typedef int (*f)(int, int);

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    f test = &sum;
    int (*func)(int, int) = sum;

    printf("sum = %d\t%d\t%d", (*test)(2, 3), (*func)(2,3), (*sum)(2,3));
    return 0;
}
