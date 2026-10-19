// write a program to copy 2 2d array into 3rd 2d array & display it
#include <stdio.h>
// #create constant
#define ROW 3
#define COLUMN 3
void main()
{

    int hotel_1[ROW][COLUMN] = {
        {10, 20, 30},
        {12, 22, 32},
        {42, 52, 62},
    };

    int hotel_2[ROW][COLUMN] = {
        {5, 7, 9},
        {11, 13, 15},
        {17, 21, 25},
    };

    int total[ROW][COLUMN] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };

    // addition
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            total[r][c] = hotel_1[r][c] + hotel_2[r][c];
        }
    }
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%[%5d] + %[%5d] = %[%5d] \t", hotel_1[r][c], hotel_2[r][c], total[r][c]);
        }
        printf("\n"); // new line
    }
}