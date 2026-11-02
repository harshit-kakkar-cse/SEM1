#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d", ch, ch);
}