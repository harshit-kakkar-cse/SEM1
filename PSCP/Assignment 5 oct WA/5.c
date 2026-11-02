#include <stdio.h>
int get_int(char* prompt);
int digitCount(long int x);
int reverse(int a);
int digitSum(int num );
int largestDigit(int num);
int main(void)
{
    int num= get_int("Enter the number");
    // reverse(num);
    printf("The reverse of the number is: %i\n", reverse(num));
    // digitSum(num)
    printf("The sum of the digits of the number is: %i\n", digitSum(num));
    //digitCount(num)
    printf("The number of the digits of the number is: %i\n", digitCount(num));
    // largestDigit(num)
    printf("The largest of the digits of the number is: %i\n", largestDigit(num));
    return 0;
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
int digitCount(long int x)
{
    //counting digits
    if (x == 0)
        return 1;
    if (x < 0)
        x = -x;
    int count = 0;
    while(x>0)
    {
        x=x/10;
        count++;
    }
    return count;
}
int reverse(int a)
{
    int res=0;
    int count = digitCount(a);
    // starting from the right end and adding the digits by multiplying the already number by 10;
    for(int i =0; i<count; i++)
    {
        int digit = a%10;
        a = (a/10);
        res = res*10 + digit;
        
    }
    
    return res;
}
int digitSum(int a)
{
    int res=0;
    int count = digitCount(a);
    //adding the digits starting from units place
    for(int i =0; i<count; i++)
    {
        int digit = a%10;
        a = (a/10);
        res += digit;
        
    }
    return res;
}
int largestDigit(int num)
{
    //finding the largest digit out of the ones in the given number
    int greatest = num%10;
    int count = digitCount(num);
    for(int i =0; i<count; i++)
    {
        int digit = num%10;
        num = (num/10);
        if(digit>greatest)
        {
            greatest = digit;
        }
        
    }
    return greatest;
}