/*
    write a program to do currency denomination of given amount
    input : 888
    500 x 1 = 500
    200 x 1 = 200
    100 x 1 = 100
    50 x 1 = 50
    20 x 1 = 20
    10 x 1 = 10
    5 x 1 = 5
    2 x 1 = 2
    1 x 1 = 1
*/
#include <stdio.h>
void main()
{
    int amount,five_hd, two_hd, one_hd, fifty, twenty, ten, five, two, one;
    printf("enter amount");
    scanf("%d",&amount);

    five_hd = amount / 500; // 1
    printf("500 X  %d = %d", five_hd, 500 * five_hd);

    amount = amount - (500 * five_hd); // 388
    two_hd = amount / 200;             // 1
    printf("\n200 X  %d = %d", two_hd, 200 * two_hd);
    amount = amount - (200 * two_hd); // 188

    one_hd = amount / 100; // 1
    printf("\n100 X  %d = %d", one_hd, 100 * one_hd);
    amount = amount - (100 * one_hd); // 88

    fifty = amount / 50; // 1
    printf("\n50 X  %d = %d", fifty, 50 * fifty);
    amount = amount - (50 * fifty);
    
    twenty = amount / 20; //1 
    printf("\n20 X  %d = %d", twenty, 20 * twenty);
    amount = amount - (20 * twenty);

    ten = amount / 10; //1 
    printf("\n10 X  %d = %d", ten, 10 * ten);
    amount = amount - (10 * ten);

    five = amount / 5; //1 
    printf("\n5 X  %d = %d", five, 5 * five);
    amount = amount - (5 * five);

    two = amount / 2; //1 
    printf("\n2 X  %d = %d", two, 2 * two);
    amount = amount - (2 * two);

    one = amount / 1; //1 
    printf("\n1 X  %d = %d", one, 1 * one);
    amount = amount - (1 * one);

}