// write a program to calculate and display compound interest of given amount rate year
#include <stdio.h>
void main()
{
    int year;
    float amount, rate, result, total_interest = 0;
    printf("Enter amount");
    scanf("%f",&amount);
    printf("Enter rate");
    scanf("%f",&rate);
    printf("Enter year");
    scanf("%d",&year);
    while(year>0)
    {
        result = (amount * rate * 1) / 100;
        total_interest = total_interest + result; // 100
        amount = amount + result;   
        year = year - 1;
    }
    printf("total compound interest = %.2f", total_interest); // 2nd year interest
}