#include <stdio.h>

void switchTwoNums(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    switchTwoNums(a,b);
    printf("%d %d",a,b);
    return 0;
}
