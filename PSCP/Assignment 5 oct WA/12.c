#include <stdio.h>
int get_int(char* prompt);
int dcount(int a);
long getPower(int a, int b);
long isAutomorphic(int a);

int main(void)
{
    int a;
    do{
        a = get_int("Enter a positive integer: ");

    }while(a <0);
    if (isAutomorphic(a))
    {
        printf("The given number is an automorphic number.\n");
        return 0;
    }
    printf("The given number is not an automorphic number\n");
    return 1;
    
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
    int count = 0; 
    while(a>0)
    {
        a/=10;
        count++;
    }
    return count;
}
long getPower(int a, int b)
{
    long ans = 1;
    for(int i = 0; i<b; i++)
    {
        ans*=a;
    }
    return ans;
}
long isAutomorphic(int a)
{
    long sq = a*a;
    int c = dcount(a);
    if((sq%(getPower(10,c)))==a) return 1;
    return 0;
}