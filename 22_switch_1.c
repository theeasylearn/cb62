/*
    write a program to accept 2 number from user. do any one of the following operation and display result. ask user about operation
        addition
        subtraction
        multiplication
        division
    & display result.
*/
#include <stdio.h>
void main()
{
    int num1, num2, choice;
    float result;
    printf("Enter value for num1");
    scanf("%d", &num1);

    printf("Enter value for num2");
    scanf("%d", &num2);

    printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division\nEnter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("addition");
        break;
    case 2:
        result = num1 - num2;
        printf("subtraction");
        break;
    case 3:
        result = num1 * num2;
        printf("multiplication");
        break;
    case 4:
        result = (float)num1 / num2;
        printf("division");
        break;
    default:
        printf("invalid choice");
    }
    printf(" %.2f \n good bye", result);
}