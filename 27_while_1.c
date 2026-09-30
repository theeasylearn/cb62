// 1 2 3 4 5 6 7 8 .......100
#include <stdio.h>
void main()
{
    int num = 1;
    while (num <= 100) //101<=100
    {
        // loop body
        printf("%d ", num); //3
        num = num + 1; // 4
    }
    printf("\n good bye");
}