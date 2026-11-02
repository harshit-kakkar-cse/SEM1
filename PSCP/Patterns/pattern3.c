#include <stdio.h>
int get_int(char* prompt);

int main(void)
{
    int n = get_int("What is the number ");

    for (int  i = 1; i<=n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k<i; k++)
        {
            printf("A ");
        }
        printf("\n");
    }
    

}

int get_int(char* prompt)
{
    printf("%s", prompt);
    int a;
    scanf("%d",&a);
    return a;
}