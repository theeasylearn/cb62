// write a program to findout whether given number is 3 digit armstrong number or not
/*
    input : amount : 153
    process : 1 5 3
    process : 1x1x1 + 5x5x5 +  3x3x3
    process : 1 + 125 + 27
    process : 153

*/
#include <stdio.h>
void main()
{
    int amount, last_digit, sum;
    printf("Enter amount");
    scanf("%d", &amount);
    if (amount < 100 || amount > 999)
    {
        printf("it is not armstrong number");
    }
    else
    {
        int original_amount = amount; // 153
        for (sum = 0; amount > 0; amount = amount / 10)
        {
            last_digit = amount % 10;
            last_digit = last_digit * last_digit * last_digit;
            sum = sum + last_digit;
        }
        printf("sum = %d\n", sum);
        if (original_amount == sum)
        {
            printf("given number is armstrong number");
        }
        else
        {
            printf("given number is not armstrong number");
        }
    }
}