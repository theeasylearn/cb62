// write a program to findout & display profit or loss amount from given purchase price and sales price.
// purchase price 20 sales price 30 : sales price (30) - purchase price(20) = 10 profit
// purchase price 40 sales price 35 : sales price (35) - purchase price(40) = -5 loss
#include <stdio.h>
void main()
{
    int sales_price, purchase_price, difference;
    printf("Enter sales price");
    scanf("%d", &sales_price);

    printf("Enter purchase price");
    scanf("%d", &purchase_price);

    difference = sales_price - purchase_price;
    if (difference > 0)
    {
        printf("Profit amount is %d", difference);
    }
    if (difference < 0)
    {
        printf("loss amount is %d", difference);
    }
    printf("\n good bye");
}