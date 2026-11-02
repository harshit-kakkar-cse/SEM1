#include <stdio.h>
int get_int(char* prompt);
int isPerfect(int a);
int main(void)
{
    int a = get_int("Enter a number L: ");
    int b = get_int("Enter a number R: ");
    printf("The perfect numbers between L and R are : \n");
    int countPerfect = 0;
    for (int i = a+1; i <b; i++)
    {

        if(isPerfect(i))
        {
            printf("%d\t",i);
            countPerfect++;
        }
    }
    printf("\n");
    printf("The number of perfect numbers in the range are %d\n", countPerfect);

}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
int isPerfect(int a)
{
    int sum = 0;
    for(int i = 0 ; i<a;i++)
    {
        if(a%i == 0)
        {
            sum+=i;
        }
    }
    if(sum == a)
    {
        return 1;
    }
    return 0;
}
