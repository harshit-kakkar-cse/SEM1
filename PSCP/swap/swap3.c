#include <stdio.h>
#include <math.h>

// void swap(int* a, int* b);
int main(void)
{

    int a = 2;
    int b = 3;
    int y = pow(a,b);
    int count = 0;
    for (;y!=1;count++)
    {
        y=y/a;

    }
    b=a;
    a = count;
    printf("%d", a);
    printf("%d", b);
}