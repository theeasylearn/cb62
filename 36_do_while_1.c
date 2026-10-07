// write a program to print following series
// 1 -2 3 -4 5 -6 7 -8.... 100
#include <stdio.h>
void main()
{
    int num = 1, reminder;
    do
    {
        reminder = num % 2; // 1
        if (reminder == 1)
        {
            printf("%d  ", num);
        }
        else
        {
            printf("%d  ", num - (num * 2));
        }
        num = num + 1;
    }while(num<=100);
}