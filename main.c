#include <stdio.h>

int main()
{
    int arr[][3] ={{1,2,3},{2,3,4}};
    printf("%d", *((*arr+1)+0));
    return 0;
}