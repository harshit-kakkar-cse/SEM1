#include <stdio.h>
#include <math.h>
int get_int(char* prompt);
int dcount(int a);
int scanRight(int a);
int scanLeft(int a);

int main(void)
{
    int a = get_int("Please enter the digits in the form of a bigger number: ");
    int left = scanLeft(a);
    int Right = scanRight(a);
    printf("%d\n",left);
    printf("%d\n",Right);

    
}
int  get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%i", &a);
    return a;
}
int dcount(int a)
{
    int count=0;
    while(a>0)
    {
        count++;
        a/=10;
    }
    return count;
}
int scanRight(int a)
{
    int count = dcount(a);
    int greatest = a%10;
    int copy = a;
    int i;
    for(i = 0; i<count; i++){
        if(copy%10>greatest) greatest = copy%10;
        copy/=10;
    }
    
    copy = a;
    int j;
    for(j =0; j<count; j++)
    {
        if(greatest == copy%10) break;
        copy/=10;
    }
    copy -= (greatest*pow(10,j));
    copy = a;
    greatest = copy%10;
    
    for(i = 0; i<count; i++){
        if(copy%10>greatest) greatest = copy%10;
        copy/=10;
    }
 
    for(j =0; j<count; j++)
    {
        if(greatest == copy%10) break;
        copy/=10;
    }
    return j;
    
}
int scanLeft(int a)
{
    int count = dcount(a);
    int greatest = a%10;
    int copy = a;
    int i;
    for(i = count -1 ; i>=0; i--){
        if((copy%(int)pow(10,i))>greatest) greatest = copy%10;
        copy/=10;
    }
    
    copy = a;
    int j;
    for(j =count-1; j>=0; j--)
    {
        if(greatest == copy%(int)(pow(10, j))) break;
        copy/=10;
    }
    copy -= (greatest*pow(10,j));
    copy = a;
    greatest = copy%10;
    
    for(i = count -1 ; i>=0; i--){
        if(copy%((int)pow(10, i))>greatest) greatest = copy%10;
        copy/=10;
    }
    
    for(j =count-1; j>=0; j--)
    {
        if(greatest == copy%((int)pow(10, j))) break;
        copy/=10;
    }
    return j;
}
