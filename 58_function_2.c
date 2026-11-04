#include <stdio.h>
// function without return value without argument function
void printLine()
{
    printf("\n");
    for (int i = 1; i <= 100; i++)
        printf("-");
    printf("\n");
}
// function without return value with argument function
void printLetter(char letter, int count)
{
    printf("\n");
    for (int i = 1; i <= count; i++)
        printf("%c",letter);
    printf("\n");
}
void main()
{
    printLine();
    printf("the easylearn academy");
    printLine();
    printLetter('~',110);
    printf("105, eva surbhi, opp aksharwadi temple, waghawadi road, bhavnagar");
    printLetter('#',90);
}