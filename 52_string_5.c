// write a program to display string in reverse order
// input : Karan
// display : narak
// input : Bhumit
// display : timuhb
#define SIZE 32
#include <stdio.h>
void main()
{
    // create 2 string
    char name[SIZE] = "harshrajsinh", reverse[SIZE];
    int index = 0, last, first;
    do
    {
        if (name[index] == '\0')
            break;
        index++; // 1
    } while (index < SIZE);
    // printf("size = %d", index);
    last = index - 1;
    first = 0;
    while (last >= 0)
    {
        reverse[first] = name[last];
        first = first + 1;
        last = last - 1;
    }
    reverse[first] = '\0';
    printf("reverse string %s", reverse);
}
