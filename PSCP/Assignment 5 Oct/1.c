#include <stdio.h>
int get_int(char* prompt);
int main()
{
    int a = get_int("Enter the first number: ");
    int b= get_int("Enter the second number: ");
    // checking if the second number is zero or not
    
    
    printf("The sum of the two numbers is %i\n",a+b);
    printf("The difference of the two numbers a-b is %i and b-a is %i\n", a-b, b-a);
    printf("The product of the two numbers is %i\n",a*b);
    if(b==0)
    {
        printf("The quotient a/b is not possible because the second number is zero");
        
    }
    else
    {
        printf("The quotient is %0.2f\n",a/(float)b);
        
    }
    printf("The remainder of is %d\n", a%b);
    
}
int get_int(char* prompt)
{
    float a;
    printf("%s\n",prompt);
    scanf("%f",&a);
    return a;
}