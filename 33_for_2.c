// write a program to print calculate & display sum of all digits in given amount
/*
    input : amount : 12345 process : 1+2+3+4+5 = 15

*/
#include <stdio.h>
void main()
{
    int amount, last_digit, sum;
    printf("enter amount");
    scanf("%d", &amount);
    for (sum = 0; amount > 0; amount = amount / 10)
    {
        last_digit = amount % 10;
        sum = sum + last_digit;
    }
    printf("sum = %d", sum);
}