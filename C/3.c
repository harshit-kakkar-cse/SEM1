#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (islower(ch))
    {
        printf("%c is the uppercase of %c", toupper(ch), ch);
    }
    else if(isupper(ch))
    {
        printf("%c is the lowercase of %c", tolower(ch), ch);
    }
    else
    {
        printf("The entered character is not an alphabet.");
    }
}