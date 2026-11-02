#include <stdio.h>
int get_int(char* prompt);
int main(void)
{
    int input = get_int("Enter a number: ");
    if(input % 2 == 0)
    {
        printf("%d is an even number.", input);
    }
    else
    {
        printf("%d is an odd number.", input);
    }
}
int get_int(char* prompt)
{
    int ans;
    printf("%s", prompt);
    scanf("%d", &ans);
    return ans;
}