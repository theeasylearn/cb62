// concept of recursion
// write a program to findout & display binary of given decimal number
// input : 19 binary 10011
// https://www.youtube.com/watch?v=-gyDAMNyu_Y
#include <stdio.h>
void binary(int number)
{
    int reminder = 0;
    if (number > 0)
    {
        reminder = number % 2;
        number = number / 2;
        binary(number);
        printf("%d", reminder);
    }
}
void main()
{
    int number;
    printf("Enter number");
    scanf("%d",&number);
    binary(number);
}