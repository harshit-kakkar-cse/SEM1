#include <stdio.h>
int get_int(char* prompt);
void printSequence(int N);

int main(void)
{
    int N = get_int("Enter the value of N: ");
    printSequence(N);
    return 0;
}
int get_int(char* prompt)
{
    printf("%s", prompt);
    int a;
    scanf("%d",&a);
    return a;
}
void printSequence(int N)
{
    // if 0 is entered give the sequence to be non existant because there will be 0 elements 
    if(N==0)
    {
        printf("No Sequence for 0 elements\n");
        return;
    }
    // giving logic for the asked sequence
    printf("Following is the sequence: - \n");
    int element = 1;
    printf("%d ",element);
    for(int i = 2; i<=N; i++)
    {

        element = (element*i)+i;
        printf("%d ", element);
    }
    printf("\n");
    return;
}