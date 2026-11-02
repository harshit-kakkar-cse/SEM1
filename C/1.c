#include <stdio.h>

int main(void)
{
    char name[50];
    printf("Hello Everyone!\n");
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    int num;
    printf("Roll Number : ");
    scanf("%d",&num);
    char branch[50];
    printf("Branch: ");
    scanf("%s", branch);
    printf("Year: ");
    int year;
    scanf("%d", &year);
    printf("Name : %s Branch : %s Year : %d Roll Number : %d", name, branch, year, num);
}