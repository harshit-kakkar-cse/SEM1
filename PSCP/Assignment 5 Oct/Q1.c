// A person likes the number 2,3,9 therefore he considers a number pretty if its last digits are 2,3,9. Person wants to watch the numbers between L and R (including both )
// INPUT sample 
// the first and only line of te input line contais two nunmbers L and R separated by space 
// OUTPUT
// all pretty numbers

// 1,10

#include <stdio.h>
int get_int(char* prompt);
int power(int a, int b );
int main(void)
{
    int L;
    int R;
    scanf("%d %d", &L, &R);
    int c = 0;
    for(int i = L; i<=R; i++)
    {
        int digit = i%10;

        if (digit == 2|| digit == 3 || digit ==9)
        {
            c++;
        }
    }
    printf("%d", c);
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
