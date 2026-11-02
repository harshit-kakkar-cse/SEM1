#include <stdio.h>
int smallest(int a, int b, int c);
int greatest(int a, int b, int c);
int get_int(char* prompt);
int main(void)
{
    int a = get_int("Enter the first number: ");
    int b = get_int("Enter the second number: ");
    int c = get_int("Enter the third number: ");
    if(a==b && b==c)
    {
        printf("The three numbers are equal\n");
        return 0;
    }
    printf("Greatest of these three numbers is %d\n", greatest(a,b,c));
    printf("Smallest of these three numbers is %d\n",smallest(a,b,c));
    return 0;
    
    
}

int smallest(int a, int b, int c)
{
    if(a<b)
    {
        if(a<c)
        { 
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b<c)
        { 
            return b;
        }
        else
        {
            return c;
        }
            
    }
    
}
int greatest(int a, int b, int c)
{
    if(a>b)
    {
        if (a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else {
            return c;
        }
    }
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}