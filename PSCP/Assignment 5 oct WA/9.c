#include <stdio.h>
int get_int(char* prompt);
int isArmstrong(int a);
int dcount(int a);
int getPower(int a, int b);


int main(void)
{
    int L = get_int("Enter the lower limit: ");
    int R = get_int("Enter the upper limit: ");
    int counter = 0;
    printf("The armstrong numbers between L and R\n");
    for(int i = L+1; i<R; i++)
    {
        if(isArmstrong(i))
        {
            counter++;
            printf("%d\t", i);
        }
    
    }
    if(counter==0) printf("There are no armstrong numbers between L and R");
    printf("\n");
    int a = get_int("Enter the base number: ");
    int b = get_int("Enter the exponent: ");
    printf("The power will be : %d\n", getPower(a,b));
    
    int input = get_int("Enter a number to calculate the number if digits: ");
    printf("The number of digits in the number %d are %d", input, dcount(input));
    
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
int getPower(int a, int b)
{
    int ans =1;
    for(int i = 0; i < b; i++) ans *=a;
    return ans;
}
int isArmstrong(int a)
{
    int power = dcount(a);
    int sum = 0;
    int copy = a;
    for(int i =0; i<power; i++)
    {
        sum+= getPower(a%10, power);
        a/=10;
    }
    if(sum == copy) return 1;
    return 0;
}