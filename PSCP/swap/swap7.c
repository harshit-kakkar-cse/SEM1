#include <stdio.h>
#define swap(a,b) {int temp = a; a = b; b = temp;}
int main(void)
{

    int a = 1;
    int b = 2;
    swap(a, b);
    printf("%d", a);
    printf("%d", b);
}