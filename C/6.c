#include <stdio.h>
int get_float(char* prompt);
int main(void)
{
    float num = get_float("Enter a number: ");
    printf("Its integer part is %d", (int)(num));
}
int get_float(char* prompt)
{

    float ans;
    printf("%s", prompt);
    scanf("%f", &ans);
    return ans;
}
