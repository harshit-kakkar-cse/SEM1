#include <stdio.h>
int get_int(char* prompt);
int isPrime(int a);

int main(void)
{
    int a = get_int("Enter the positive integer: ");
    if(isPrime(a))
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }
    printf("The prime numbers from 2 to %d are:\n", a);
    for (int i = 2; i<=a; i++)
    {
        if(isPrime(i))
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}

int isPrime(int a)
{
    int count = 0;
    for (int i = 1; i<=a; i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
