// write a program to calculate and display factorial of given number
// input : 5 Process 5 x 4 x 3 x 2 x 1 = 120 answer 120
// input : 6 Process 6 x 5 x 4 x 3 x 2 x 1 = 720 answer 720
#include <stdio.h>
void main()
{
    int num, factorial = 1;
    printf("Enter number");
    scanf("%d", &num);
    while (num > 1)
    {
        factorial = factorial * num; // 5
        num = num - 1;               // 4
    }
    printf("factorial = %d ", factorial);
}