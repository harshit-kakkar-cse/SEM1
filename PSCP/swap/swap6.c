#include <stdio.h>

typedef struct pair
{
    int a;
    int b;
}pair;
pair swap(int a, int b);
int main(void)
{
    
    int a = 1;
    int b = 2;
    pair p = {a,b};
    p = swap(p.a, p.b);

    printf("%d", p.a);
    printf("%d", p.b);
}
pair swap(int a, int b)
{
    pair p = {b,a};
    return p;
}
