// example of 1d array
// write a program to findout given value exist or not in unsorted array
#include <stdio.h>
void main()
{
    // static initialization of array
    int numbers[] = {100, 250, 150, 300, 500, 450};
    // print
    int index = 0, value;
    while (index < 6)
    {
        printf("number at %d position is %d\n", index, numbers[index]);
        index++;
    }
    printf("Enter value");
    scanf("%d", &value); // 900
    index = 0;
    while (index < 6)
    {
        if (value == numbers[index])
        {
            printf("value found");
            break; // loop stop
        }
        index++;
    }
    
    if (index == 6)
    {
        printf("value not found");
    }
}