// write a program to print multiplication table of given number
/*
    input : 30
    30 x 1 =  30
    30 x 2 =  60
    30 x 3 =  90
    30 x 4 =  120
    30 x 10 = 300

*/
#include <stdio.h>
void main()
{
    int num = 30, multiplier, result;
    printf("Enter number");
    scanf("%d",&num);
    for(multiplier=1;multiplier<=10;multiplier++)
    {
        result = num * multiplier;
        printf("%d X %2d = %5d\n", num, multiplier, result);
    }
}