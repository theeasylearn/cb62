// example of 1d array
// write a program to findout maximum number from float array
#include <stdio.h>
void main()
{
    // static initialization of array
    float numbers[] = {100.1, 1050.22, 78.69, 200.37, 1888.22};
    float max = numbers[0];
    int index = 1;
    while (index < 5)
    {
        if (numbers[index] > max)
        {
            max = numbers[index];
        }
        index = index + 1;
    }
    printf("Maximum number is %.2f", max);
}