#include <stdio.h>
int get_int(char* prompt);
int main(void)
{
    int a = get_int("Enter the units used this month: ");
    char b;
    long bill =0;
    // The first 100 units are charged at ₹2 per unit, the next 100 units at ₹3 per unit, the next 200 units at ₹5 per unit, and units above 400 at ₹7 per unit.
    if(a>400)
    {
        b = 'A';
        bill = (a-400)*7 + 1500;
    }
    else if(a>200 && a<=400)
    {
        b = 'B';
        bill = (a-200)*5 + 500;
    }
    else if(a>100 && a<=200)
    {
        b = 'C';
        bill = (a-100)*3 + 200;
    }
    else 
    {
        b ='D';
        bill = a * 2;
    }
    // If the final bill exceeds ₹2000, add a surcharge of ₹100.
    if(bill>2000)
        bill += 100;
    printf("The Electricity bill for this month is %li\n", bill);
    return 0;
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
