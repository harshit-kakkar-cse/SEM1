#include <stdio.h>
int get_int(char* prompt);
int isPerfect(int a);

int main(void)
{
    int L = get_int("Enter the lower limit L: ");
    int R = get_int("Enter the upper limit R: ");
    int counter = 0;
    for(int i = L; i<R+1; i++)
    {

        if(isPerfect(i))
        {
            counter++;
            printf("%d\t", i);
        }
    }
    printf("\n");
    printf("The number of perfect numbers in the given range including both the upper limit and lower limit is %d\n", counter);
    if (counter==0) printf("There is no a perfect number in the given range(including both L and R)\n");
    return 0;
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
    // a perfect number is one whose perfect factors add up to the number itself
    int sum = 0;
    for(int i = 1 ; i<a;i++)
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
