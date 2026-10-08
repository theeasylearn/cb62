/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>
void main()
{
    int i = 1,j;
    for (j = 1; j <= 5; j++) //outer loop
    {
        for (i = 1; i <= j; i++) //inner loop 
        {
            printf("*");
        }
        printf("\n");
    }
}