#include <stdio.h>
int get_int(char* prompt);
int gcd(int a, int b);
int lcm(int a, int b);
int main(void)
{
    int a = get_int("Enter first positive integer: ");
    int b = get_int("Enter second positive integer: ");
    int g = gcd(a, b);
    printf("The GCD of %d and %d is %d\n", a, b, g);
    int l = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, l);

    return 0;
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}

int gcd(int a, int b)
{
    // using euclidean algorithm to find GCD
    if(b>a) //swapping the numbers to keep b>a
    {
        int t = b;
        b = a;
        a = t;
    }
    while(a != 0)
    {
        int t = b;
        b = a%b;
        a = t;

    }
    return b;
}

int lcm(int a, int b)
{
    //if any of the numbers is 0 return 0 immediately
    if(a==0 || b==0)
    {
        return 0;
    }
    //swapping the numbers to keep b>a
    if(b>a) 
    {
        int t = b;
        b = a;
        a = t;
    }
    //first common multiple is the LCM
    int i = a;
    while(i%b != 0)
    {
        a++;
    }

    return a-1;
}
