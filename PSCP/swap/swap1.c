#include <stdio.h>
void swap(int* a, int* b);
int main(void)
{

    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("%d", a);
    printf("%d", b);
}
void swap(int* a, int* b)
{
    int x = *a;
    int y = *b;
    int c = y;
    y=x;
    x=c;
    *a = x;
    *b = y;
}