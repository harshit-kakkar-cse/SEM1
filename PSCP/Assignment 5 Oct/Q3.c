// Write a C program to determine whether a given number is prime number Using a function isPrime. range 2<<10^6

// 7
// Prime
// 29 
// Prime 
#include <stdio.h>
int isPrime(int a);
int main(void)
{
    int input;
    scanf("%d",&input);
    if(isPrime(input))
    {
        printf("Prime\n");
        return 0;
    }
    printf("Not Prime\n");
    return 0;
    
}
int isPrime(int a)
{
    int count = 0;
    for (int i = 1; i<=a; i++)
    {
        if(a%i == 0)
        { 
            count ++;
        }
    }
    if(count == 2)
    {
        return 1;
    }
    return 0;
}