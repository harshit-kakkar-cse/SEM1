#include <stdio.h>
#include <math.h>
int get_int(char* prompt);
int dcount(long int x);
void extract_dig(int digits[],long int x, int dcount);
int main(void)
{
    int a;
    do
    {
        /* code */
        a = get_int("Enter a positive integer: ");
    } while (a<0);
    int count = dcount(a);
    int digits[count];
    int sum=0;
    extract_dig(digits, a, count); 

    // PRINTING REVERSE
    printf("====================================================\n");
    printf("ORIGINAL: ");
    int greatest = digits[0];
    for (int i = count-1; i >=0; i--)
    {
        sum+=digits[i];
        if(greatest<digits[i])
        {
            greatest = digits[i];
        }
        printf("%d\t", digits[i]);
    }
    printf("\n");
    
    printf("REVERSE : ");
    for (int i = 0; i <count; i++)
    {
        printf("%d\t", digits[i]);
    }
    printf("\n");
    printf("====================================================\n");
    printf("Sum of digits: %d\n", sum);
    printf("====================================================\n");
    printf("The number of digits in the number is %d\n", count);
    printf("====================================================\n");
    printf("The greatest digit in the number is %d\n", greatest);
    printf("====================================================\n");

}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
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