#include <stdio.h>
int get_int(char* prompt);
int main(void)
{
    int biggest = 0;
    int f = get_int("Enter first number: ");
    int s = get_int("Enter second number: ");
    int t = get_int("Enter third number: ");
    if (f > s && f > t)
    {
        biggest = f;
    }
    else if (s > f && s > t)
    {
        biggest = s;
    }
    else
    {
        biggest = t;
    }
    printf("The biggest number is %d", biggest);
    // printf("%d", what)
    
}
int get_int(char* prompt)
{

    int ans;
    printf("%s", prompt);
    scanf("%d", &ans);
    return ans;
}
