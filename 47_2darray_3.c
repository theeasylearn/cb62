// write a program to transpose matrix into same matrix
#include <stdio.h>
// #create constant
#define ROW 3
#define COLUMN 3
void main()
{
    int matrix[ROW][COLUMN] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int temp;
    for (int r = 0; r < 3; r++)
    {
        for (int c = r + 1; c < 3; c++)
        {
            temp = matrix[r][c];         // 1
            matrix[r][c] = matrix[c][r]; // 1
            matrix[c][r] = temp;         // 1
        }
    }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("%[%10d]", matrix[r][c]);
        }
        printf("\n"); // new line
    }
}