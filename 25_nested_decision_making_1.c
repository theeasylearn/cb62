// write a program to accept time from user in 24 hours format. convert it into 12 hours format.
#include <stdio.h>
void main()
{
    int hours;
    printf("enter hours");
    scanf("%d", &hours); // 15
    // check input is valid or not
    if (hours < 1 || hours > 24)
    {
        printf("invalid hours");
    }
    else
    {
        if (hours < 12)
        {
            printf("%d AM", hours);
        }
        if (hours >= 12)
        {
            hours = hours - 12; // 3
            printf("%d PM", hours);
        }
    }

    printf("\n good bye");
}