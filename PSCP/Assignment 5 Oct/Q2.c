// There is a cricket match going on between two teams A and B. Team B is batting second and got a target of x runs. Currently team b has scored y runs. Determine how many runs should team B score to win the matcj
// INPUT
// Each test cases consist of two test cases x and Y which are the targer and current score 
// // output
// how many scores team B should score to win match 
// 200 50 150

// 100 99 1

// 53 51 2 

#include <stdio.h>
int main(void)
{
    int target;
    int score;
    scanf("%d %d", &target, &score);
    printf("%d", target-score);

}