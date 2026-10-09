/*
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
 */
#include <stdio.h>
void main()
{
    int astrik;
    int row;
    row = 5;
    while (row >= 1) //4
    {
        for (astrik = 1; astrik <= row; astrik++)
        {
            printf("%d ",astrik);
        }
        printf("\n");
        row--;
    }
}