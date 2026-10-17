// write a program to store 7 days  3 items sales data of restaurant in 2d array and display it
#include <stdio.h>
// #create constant
#define ROW 10
#define COLUMN 3
void main()
{
    // create 2d array
    // datatype array[rowsize][columnsize]
    int sales[7][3];
    // accept 1 days sales data
    // outer loop
    for (int r = 0; r < ROW; r++)
    {
        printf("Enter %d day sales data", r + 1);
        for (int c = 0; c < COLUMN; c++)
        {
            // inner loop
            printf("\n Enter %d item sales", c + 1);
            scanf("%d", &sales[r][c]);
        }
    }

    for (int r = 0; r < ROW; r++)
    {
        for (int c = 0; c < COLUMN; c++)
        {
            printf("%10d", sales[r][c]);
        }
        printf("\n");
    }

    //task
    //generate & print 7 days total sale 
    //generate findout minimum and maximum sales 
    //generate and print item wise 7 day total   
}