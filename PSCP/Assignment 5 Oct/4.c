#include <stdio.h>
int get_int(char* prompt);
void extract_dig(int digits[],long int x, int dcount);
int main(void)
{
    int a = get_int("Enter the units used this month: ");
    char b;
    long bill =0;

    if(a>400)
    {
        b = 'A';
        bill = (a-400)*7 + 1500;
    }
    else if(a>200)
    {
        b = 'B';
        bill = (a-200)*5 + 500;
    }
    else if(a>100)
    {
        b = 'C';
        bill = (a-100)*3 + 200;
    }
    else 
    {
        b ='D';
        bill = a * 2;
    }

    if(bill>2000)
        bill += 100;
    printf("The Electricity bill for this month is %li\n", bill);
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
