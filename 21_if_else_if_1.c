// write a program to findout income tax , net income and annual income from given monthly income as per below rules
//     annual income                              Tax Rate
//     1) Above Rs. 24,00,000                       30%
//     2) From Rs. 20,00,001 to Rs. 24,00,000	    25%
//     3) From Rs. 16,00,001 to Rs. 20,00,000	    20%
//     4) From Rs. 12,00,000 to Rs. 16,00,000	    15%
//     5) below 12,00,000                            0%

//     steps
//     1) accept monthly income
//     2) calculate annual income
//     3) calculate tax as per rule
//     4) calculate net income using annual income and tax
//     5) display annual income, tax, net income

#include <stdio.h>
void main()
{
    int monthly_income, annual_income;
    float tax, net_income;

    printf("Enter monthly income");
    scanf("%d", &monthly_income);

    // calculate annual income
    annual_income = monthly_income * 12;
    if (annual_income < 1200000)
    {
        tax = 0;
    }
    else if (annual_income >= 1200000 && annual_income <= 1600000)
    {
        tax = annual_income * 15 / 100;
    }
    else if (annual_income >= 1600001 && annual_income <= 2000000)
    {
        tax = annual_income * 20 / 100;
    }
    else if (annual_income >= 2000001 && annual_income <= 2400000)
    {
        tax = annual_income * 25 / 100;
    }
    else
    {
        tax = annual_income * 30 / 100;
    }
    // net income
    net_income = annual_income - tax;
    printf("Annual Income = %d", annual_income);
    printf("\nTax = %.2f", tax);
    printf("\nNet income = %.2f", net_income);

}