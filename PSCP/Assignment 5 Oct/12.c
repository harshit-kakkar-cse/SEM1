#include <stdio.h>
#include <math.h>


int get_int(char* prompt);
int dcount(long int x);
long power(int a, int b );
void extract_dig(int digits[],long int x, int dcount);
int isAutomorphic(int a);
int main(void)
{
    int a;
    do{
        a = get_int ("Enter a positive integer: ");
    }
    while (a<0);
    if(isAutomorphic(a))
    {
        printf("\nThe given number is automorphic.");
    }
}
int isAutomorphic(int a)
{

    int square = power(a,2);
    int count1 = dcount(a);
    int count2 = dcount(square);
    int oridigits[count1];
    int nextdigits[count2];
    extract_dig(oridigits,a, count1);
    extract_dig(nextdigits,square, count2);
    int count = 0;
    for(int i = 0; i<count1; i++)
    {
        // printf("%d", nextdigits[i]);
        if(nextdigits[i] == oridigits[i])
        {
            count++;
        }
    }
    if(count == count1)
    {
        return 1;
    }
    return 0;


}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}

long power(int a, int b )
{
    for(int i =1; i<b; i++)
    {
        a*=a;
    }
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
        remainder = x%((int)(pow(10.00,count)));
        count++;
    }
    return count-1;
}

void extract_dig(int digits[],long int x, int dcount)
{
    for(int i = 0; i < dcount; i++)
    {
        // int remainder = x % ((int)(pow(10.00, dcount - i)));
        digits[i] = ((int)(x/pow(10.00,i))%10);
        // digits[i] = ((int)(pow((float)digits[i], dcount)));
    }
}