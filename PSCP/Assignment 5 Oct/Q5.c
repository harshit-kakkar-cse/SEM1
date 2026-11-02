// Write a C program to check whether a given string is palindrome or not 
// // MADAM -> palindrome 
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char str[100];
    printf("Enter the required string: ");
    scanf("%99s", str);
    int count=0;
    for(int i = 0; str[i]!='\0'; i++)
    {
        str[i] = tolower(str[i]);
        count++;
    }
    for(int i = 0, j= count-1; str[i]!='\0' && j >=0; i++,j--)
    {
        if(str[i]!=str[j])
        {
            printf("Not Palindrome\n");
            return 1;
        }
    }
    printf("Palindrome\n");
    return 0;
   


}