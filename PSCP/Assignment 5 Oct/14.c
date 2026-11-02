#include <stdio.h>
int get_int(char* prompt);
int power(int a, int b );
int dcount(long int x);
void extract_dig(int digits[],long int x, int dcount);
int main(void)
{
    int N;
    do
    {
        N = get_int("Enter the number: ");
    }
    while(N<0);
    int digCount = dcount(N);
    
    int digits[digCount];
    while(digCount!=1)
    {
        extract_dig(digits, N, digCount);
        N = 0;
        for(int i = 0; i<digCount; i++)
        {
            N += digits[i];
        }
        digCount = dcount(N);
    }    
    printf("The last remaining digit is %d\n",N);
}
int power(int a, int b )
{
    int ans=1;
    for(int i = 0; i<b; i++)
    {
        ans = ans*a;
    }
    
    return ans;
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
int dcount(long int x)
{
    if (x == 0)
        return 1;
    if (x < 0)
        x = -x;
    int count = 0;
    int remainder=0;

    while(remainder != x)
    {
        remainder = x%((int)(power(10.00,count)));
        count++;
    }
    return count-1;
}
void extract_dig(int digits[],long int x, int dcount)
{
    for(int i = 0; i < dcount; i++)
    {
        // int remainder = x % ((int)(pow(10.00, dcount - i)));
        digits[i] = ((int)(x/power(10.00,i))%10);
        // digits[i] = ((int)(pow((float)digits[i], dcount)));
    }
}