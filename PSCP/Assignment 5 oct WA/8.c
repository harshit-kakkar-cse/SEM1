#include <stdio.h>
#include <math.h>
int get_int(char* prompt);
int dcount(int a);
long fac(int a);
int isPalindrome(int a);
int isPerfect(int a);
int isStrong(int a);
int isArmstrong(int a);

int main(void)
{
    int a;
    do
    {
        a = get_int("Please enter a number: ");
        
    }
    while(a<0);
    if(isPalindrome(a)) printf("The given number is a palindrome\n");
    else printf("The given number is not a palindrome\n");
    if(isStrong(a)) printf("The given number is a Strong number\n");
    else printf("The given number is not a Strong number\n");
    if(isArmstrong(a)) printf("The given number is a armstrong number\n");
    else printf("The given number is not a armstrong number\n");
    if(isPerfect(a)) printf("The given number is a perfect number\n");
    else printf("The given number is not a perfect number\n");
    return 0;
}
int get_int(char* prompt)
{
    printf("%s", prompt);
    int a;
    scanf("%d",&a);
    return a;
}
int dcount(int a)
{
    if(a==0) return 1;
    int count= 0;
    while(a>0)
    {
        a=a/10;
        count++;
    }
    return count;
}
long fac(int a)
{
    if(a == 1 || a==0) return 1;
    return a*fac(a-1);
}
int isPalindrome(int a)
{
    int reverse = 0;
    int copy = a;
    while(a>0)
    {
        int digit = a%10;
        a=a/10;
        reverse = (reverse*10) + digit; 
    }
    if(copy == reverse)
    {
        return 1;
    }
    return 0;
}
int isPerfect(int a)
{
    int sum=0;
    for(int i = 1; i<a; i++)
    {
        if (a%i == 0) sum+=i;

    }

    if(sum==a)
    {
        return 1;
    }
    return 0;
}
int isStrong(int a)
{
    int sum=0;
    int count = dcount(a);
    int copy = a;
    for(int i = 0; i<count; i++)
    {
        sum += fac(a%10);
        a/=10;
    }
    if (sum==copy){
        return 1;
    } 
    return 0;
}
int isArmstrong(int a)
{
    int power = dcount(a);
    int sum = 0;
    int copy = a;
    for(int i =0; i<power; i++)
    {
        sum+= pow(a%10, power);
        a/=10;
    }
    if(sum == copy) return 1;
    return 0;
}