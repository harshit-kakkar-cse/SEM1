#include <stdio.h>
int get_int(char* prompt);
long long sumDigits(int a);
long long productDigits(int a);
int largestDigit(int a);
int smallestDigit(int a);
int evenDigit(int a);
int oddDigit(int a);

int main(void)
{
    int a;
    do{
        a = get_int("Please enter a positive integer: ");

    }while(a<0);
    printf("The sum of digits is : %lli\n",sumDigits(a));
    printf("The product of digits is : %lli\n",productDigits(a));
    printf("The largest of digits is : %d\n",largestDigit(a));
    printf("The smallest of digits is : %d\n",smallestDigit(a));
    printf("The number of even digits is : %d\n",evenDigit(a));
    printf("The number of odd digits is : %d\n",oddDigit(a));
    return 0;
}
int get_int(char* prompt)
{
    printf("%s", prompt);
    int a;
    scanf("%d",&a);
    return a;
}
long long sumDigits(int a)
{
    long long sum = 0;
    while(a>0)
    {
        sum += a%10;
        a/=10;
    }
    return sum;
}
long long productDigits(int a)
{
    long long product = 1;
    while(a>0)
    {
        product *= a%10;
        a/=10;
    }
    return product;
}
int largestDigit(int a)
{
    int greatest = a%10;
    while(a>0)
    {
        if(greatest<a%10)
        {
            greatest = a%10;
        }
        a/=10;
    }
    return greatest;
}
int smallestDigit(int a)
{
    int smallest = a%10;
    while(a>0)
    {
        if(smallest>a%10)
        {
            smallest = a%10;
        }
        a/=10;
    }
    return smallest;
}
int evenDigit(int a)
{
    int even = 0;
    while(a>0)
    {
        if((a%10)%2 == 0)
        {
            even++;
        }
        a/=10;
    }
    return even;
}

int oddDigit(int a)
{
    int odd = 0;
    while(a>0)
    {
        if((a%10)%2 != 0)
        {
            odd++;
        }
        a/=10;
    }
    return odd;
}