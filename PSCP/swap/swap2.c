#include <stdio.h>
// void swap(int* a, int* b);
int main(void)
{

    int a = 1;
    int b = 2;
    a = a+b;
    b = a-b;
    a=a-b;
    printf("%d", a);
    printf("%d", b);
}