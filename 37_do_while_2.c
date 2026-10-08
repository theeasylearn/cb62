// write a program to findout whether given number is prime number or not
#include <stdio.h>
void main()
{
    int num, reminder, deviser = 2;
    printf("Enter number");
    scanf("%d", &num);
    do
    {
        // loop body
        reminder = num % deviser; // 7%2 1
        if (reminder == 0)
        {
            printf("%d is not prime number", num);
            break; // break keyword stop loop
        }
        deviser++; // 3
    } while (deviser < num);
    if (deviser == num)
    {
        printf("%d is prime number", num);
    }
}