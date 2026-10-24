// write a program to count no of letter in string (length)
#define SIZE 32
#include<stdio.h>
void main()
{
    // create 2 string
    char name[SIZE] = "welcome";
    int index = 0;
    do
    {
        if (name[index] == '\0')
            break;
        index++; // 1
    } while (index < SIZE);
    printf("no of letters = %d", index);
}
