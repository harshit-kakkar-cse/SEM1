// A person Rohan basic salary is input through the keyboard his DA is 40% os th e basic salary and hose rent allowance is 20% of the basic salary. Write a program to calculate the gross salary 
// Gross Salary = >
#include <stdio.h>
int main(void)
{
    int basic;
    printf("Enter the basic salary: ");

    scanf("%d", &basic);
    printf("The gross salary is Rs %0.2f ", basic + (0.4*basic) + (0.2*basic));

}