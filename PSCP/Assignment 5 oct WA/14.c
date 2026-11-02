#include <stdio.h>
int get_int(char* prompt);
int dcount(int a);
int main(void)
{
    int N = get_int("Enter the value of N: ");
    while(dcount(N) != 1)
    {
        int copy = N;
        int sum = 0;
        while(copy>0)
        {
            sum+=(copy%10);
            copy/=10;
        }
        N =sum;
    }
    printf("The final single digit is : %d\n",N);
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
{   //counting the number of digits
    if(a == 0)
    {
        return 1;
    }
    int count = 0; 
    while(a>0)
    {
        a/=10;
        count++;
    }
    return count;
}