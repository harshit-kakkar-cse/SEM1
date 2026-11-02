#include <stdio.h>
int get_int(char* prompt);
int main(void)
{
    int input;
    do
    {
        input = get_int("Enter the number: ");
    }
    while(input < 0 || input <1 || input >20);
    int i = 1;
    printf("%d ",i);
    for(int j = 2; j<= input+1; j++)
    {
        i = (i*j)+j;
        printf("%d ",i);
    }
        
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
