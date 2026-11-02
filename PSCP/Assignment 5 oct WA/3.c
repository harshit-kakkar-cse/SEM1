#include <stdio.h>
char grade(float arg);
int get_int(char* prompt);
int check(int a);

int main()
{
    printf("There are five subjects: Maths, Chemistry, Hindi, Social Science and Science\n");
    printf("Enter each of the marks one by one out of hundred\n");
    int a = get_int("Enter the marks of Maths: ");

    if(check(a))
        return 1;
    int b = get_int("Enter the marks of Chemistry: ");
    
    if(check(b))
        return 1;
    int c = get_int("Enter the marks of Hindi: ");
    
    if(check(c))
        return 1;
    int d = get_int("Enter the marks of Social Science: ");
    
    if(check(d))
        return 1;
    int e = get_int("Enter the marks of Science: ");
    
    if(check(e))
        return 1;
    // printing the total marks out of 500
    printf("The total marks are %d out of 500\n",(a+b+c+d+e));
    //calculating percentage
    float percent=(a+b+c+d+e)*0.2;
    printf("The percentage is %0.2f\n", percent);
    printf("The grade is %c", grade(percent));
    if(percent >= 90)
    {
        printf("+");
    }
    
    printf("\n");
    return 0;
    
}
char grade(float arg)

{
    //assigining grades
    if(arg>=80 && arg<=100)
    {
        return 'A';
    }
    else if(arg>=70 && arg<80)
    {
        return 'B';
    }
    else if(arg>=60 && arg<70)
    {
        return 'C';
        
    }
    else if(arg>=50 && arg<60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
    
}
int get_int(char* prompt)
{
    int a;
    printf("%s", prompt);
    scanf("%d", &a);
    return a;
}
int check(int a)
{
    // checking if the given marks are within the allowed range
    if (a<0||a>100)
    {
        printf("INVALID MARKS, PLEASE START AGAIN\n");
        return 1;
    }
    return 0;
}
