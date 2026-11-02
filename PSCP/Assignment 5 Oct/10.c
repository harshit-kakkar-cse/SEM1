#include <stdio.h>
int get_int(char* prompt);
int isPrime(int a);
int main(void)
{
    int a = get_int("Enter a positive integer: ");
    //number of prime numbers needed
    int n = (a*(a+1))/2;
    int j = 1;
    for(int i = 1;i<=a; i++)
    {
        int count =0;
        while(count != i )
        {
  
            
            if(isPrime(j))
            {
                printf("%d ", j);
                count++;
            }
            j++;
            
        }
        printf("\n");
    }
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
int isPrime(int a)
{
    int count = 0;
    for (int i = 1; i<=a; i++)
    {
        if(a%i == 0)
        { 
            count ++;
        }
    }
    if(count == 2)
    {
        return 1;
    }
    return 0;
}