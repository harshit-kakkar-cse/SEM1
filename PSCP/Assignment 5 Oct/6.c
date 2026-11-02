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
    int ans;
    for (int i=0; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans = i;
        }
    }
    return ans;
}

int lcm(int a, int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }
    else
    {
        return (a*b)/gcd(a,b);
    }

}
