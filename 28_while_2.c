// 1 4 9 16 25 36  ..... 1000
// 1 2 3 4   5  6
#include <stdio.h>
void main()
{
    int num = 1,square;
    while (num <= 31) //3<=100
    {
        // loop body
        square = num * num; //9
        printf("%d ",square); //9
        num = num + 1; // 4
    }
    printf("\n good bye");
}