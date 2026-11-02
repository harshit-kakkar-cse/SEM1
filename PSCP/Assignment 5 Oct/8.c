#include <stdio.h>
#include <math.h>
int get_int(char* prompt);
int armstrong(int a);
int strong(int a);
int palindrome(int a);
int dcount(long int x);
int perfect(int a);
void extract_dig(int digits[],long int x, int dcount);
int fac(int a);

int main(void)
{
    int a = get_int("Enter a number: ");
    if (palindrome(a))
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    if (armstrong(a))
    {
        printf("The number is an armstrong number.\n");
    }
    else
    {
        printf("The number is not an armstrong number.\n");
    }   
    if (strong(a))
    {
        printf("The number is a strong number.\n");
    }
    else
    {
        printf("The number is not a strong number.\n");
    }
    if (perfect(a))
    {
        printf("The number is a perfect number.\n");
    }
    else
    {
        printf("The number is not a perfect number.\n");
    }

    
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
int palindrome(int a)
{
    int count = 0;
    int digits[dcount(a)];
    extract_dig(digits, a, dcount(a));
    for(int i = 0; i<(dcount(a)/2); i++)
    {
        if(digits[i] == digits[dcount(a) - i - 1])
        {
            count ++;
        }
    }
    if(count <=dcount(a)/2)
    {
        return 1;
    }
    return 0;

}
int dcount(long int x)
{
    if (x == 0)
        return 1;
    if (x < 0)
        x = -x;
    int count = 0;
    int remainder=0;

    while(remainder != x)
    {
        remainder = x%((int)(pow(10.00,count)));
        count++;
    }
    return count-1;
}
void extract_dig(int digits[],long int x, int dcount)
{
    for(int i = 0; i < dcount; i++)
    {
        digits[i] = ((int)(x/pow(10.00,i))%10);
    }
}
    
int armstrong(int a)
{
    int digits[dcount(a)];
    extract_dig(digits, a, dcount(a));
    int arm = 0;
    for(int i = 0; i<dcount(a); i++)
    {
        arm += pow(digits[i], dcount(a));
    }
    if(arm == a)
    {
        return 1;   
    }
    return 0;
}
int fac(int a)
{
    for(int i = 1; i<a; i++)
    {
        a *= i;
    }
    return a;
}
int strong(int a)
{
    int digits[dcount(a)];
    extract_dig(digits, a, dcount(a));
    int strong=0;
    for(int i =0; i<dcount(a); i++)
    {
        strong += fac(digits[i]);
    }
    if(strong == a)
    {
        return 1;
    }
    return 0;
}
int perfect(int a)
{
    int sum = 0;
    for(int i = 0 ; i<a;i++)
    {
        if(a%i == 0)
        {
            sum+=i;
        }
    }
    if(sum == a)
    {
        return 1;
    }
    return 0;
}