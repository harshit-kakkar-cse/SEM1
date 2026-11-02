#include <stdio.h>
int get_int(char* prompt);
char get_char(char* prompt);
int power(int a, int b);
int dcount(long int x);
void extract_dig(int digits[],long int x, int dcount);
long sum(long a, int count, int digits[]);
long multiply(long a, int count, int digits[]);
int smallest(long a, int count, int digits[]);
int greatest(long a, int count, int digits[]);
int no_even(long a, int count, int digits[]);
int no_odd(long a, int count, int digits[]);


int main(void)
{
    long a;
    do{
        a = get_int("Enter a positive number: ");
    }
    while(a<0);
    
    int count = dcount(a);
    int digits[count];
    extract_dig(digits, a, count);
    start:
    printf("==============================================\n");
    printf("Welcome to this program. Kindly select the operation you want to process\n");
    printf("1. Find sum of digits\n2. Find Products of digits\n3. Find Largest Digit\n4. Find Smallest Digit\n5. Find number of even digits\n6. Find number of odd digits\n");
    printf("==============================================\n");
    int option; 
    do{
        option = get_int("Enter the suitable option number");
    }
    while(option<0 || option>6);
    switch(option)
    {
        case 1:
            printf("The sum of digits is: %li\n", sum(a, count, digits));
            break;
        case 2:
            printf("The product of digits is %li\n", multiply(a,count,digits));
            break;
        case 3:
            printf("The largest digit is %i\n", greatest(a, count, digits));
            break;
        case 4:
            printf("The smallest digit is %i\n", smallest(a,count,digits));
            break;
        case 5:
            printf("The number of even digits is %i\n", no_even(a,count,digits));
            break;
        case 6:
            printf("The number of odd digits is %i\n", no_odd(a,count,digits));
            break;
        

    }
    
    char ask = 'a';
    ask = get_char("Do you want to start again with the same number?(y/Y)\n");
    if(ask == 'Y' || ask == 'y')
    {
        goto start;
    }
    


    
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
char get_char(char* prompt)
{
    char a;
    printf("%s", prompt);
    scanf(" %c", &a);
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
        digits[i] = ((int)(x/power(10.00,i))%10);
    }
    
}
long sum(long a, int count, int digits[])
{
    int sum = 0;
    
    for(int i = 0; i < count; i++)
    {
        sum+=digits[i];
    }
    return sum;
}
long multiply(long a, int count, int digits[])
{
    int product = 1;
    for(int i = 0; i < count; i++)
    {
        product *= digits[i];
    }
    return product;

}
int smallest(long a, int count, int digits[]){
    int smallest = digits[0];
    for (int i = 0; i < count; i++)
    {
        if(smallest<digits[i])
        {
            smallest = digits[i];
        }
    }
    return smallest;
}
int greatest(long a, int count, int digits[])
{
    int greatest = digits[0];
    for (int i = 0; i < count; i++)
    {
        if(greatest>digits[i])
        {
            greatest = digits[i];
        }
    }
    return greatest;
}
int no_even(long a, int count, int digits[])
{
    int even_count = 0;

    for (int i = 0; i<count; i++)
    {
        if (digits[i]%2==0)
        {
            even_count++;
        }
        
    }
    return even_count;
}
int no_odd(long a, int count, int digits[])
{
    int odd = 0;
    for(int i = 0; i<count; i++)
    {
        if(digits[i]%2)
        {
            odd++;
        }
    }

    return odd;
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