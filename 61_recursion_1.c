// concept of recursion
// write a program to display 1 to 10 numbers using recursion
#include <stdio.h>
// 1 2 3
void printNumber(int count) // 3
{
    // replace while with if
    if (count <= 10) // 11
    {
        printf("%5d", count); // 1  2  3
        count = count + 1;    // 4
        // call same function(printNumber)
        printNumber(count); // recursion
    }
    // printf("(%5d)", count);
}
void main()
{
    int count = 1;
    printNumber(count); // normal functional call
}