// example of 1d array
// write a program to accept 5 subject marks from user findout total, pertcentage. use 1d array
#include <stdio.h>
void main()
{
    // create array
    // datatype variable-name size
    int marks[5], total = 0;
    float percentage;
    for (int index = 0; index < 5; index++)
    {
        printf("Enter %d subject marks", index + 1);
        scanf("%d", &marks[index]);
    }

    // total
    for (int index = 0; index < 5; index++)
        total += marks[index];

    // percentage
    percentage = (100 * total) / 500;
    printf("total = %d \npercentage = %.2f \n", total, percentage);

    // display all subject marks
    for (int index = 0; index < 5; index++)
        printf("%d subject marks = %d \n",index+1, marks[index]);
}