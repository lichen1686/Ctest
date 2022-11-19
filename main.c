#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main() {
    int (* f)(int ,int);
    f = &sum;
    printf("%d", f(2,3));
    return 0;
}