#include <stdio.h>
int get_int(char* prompt)
int main(void)
{
    int x = get_int("x: ");
}
int get_int(char* prompt)
{
    int ans;
    printf("%s", prompt);
    scanf("%d", &ans);
    return ans;
}