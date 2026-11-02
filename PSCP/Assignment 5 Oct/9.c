#include <stdio.h>
int get_int(char* prompt);
int arm(int a);
int dcount(long int x);
void extract_dig(int digits[],long int x, int dcount);
int power(int a, int b);
int main(void)
{
    int a = get_int("Enter a number L: ");
    int b = get_int("Enter a number R: ");
    printf("The armstrong numbers between a and b are : \n");
    for (int i = a+1; i <b; i++)
    {

        if(arm(i))
        {
            printf("%d\n",i);
        }
    }
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
int power(int a, int b)
{
    int ans = 1;
    for(int i = 0; i<b; i++)
    {
        ans *= a;
    }
    return ans;
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
int arm(int a)
{
    int digits[dcount(a)];
    extract_dig(digits, a, dcount(a));
    int arm = 0;
    for(int i = 0; i<dcount(a); i++)
    {
        arm += power(digits[i], dcount(a));
    }
    if(arm == a)
    {
        return 1;   
    }
    return 0;
}