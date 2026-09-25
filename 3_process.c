// write a program to make addition, subtraction, multiplication, division between 2 numbers given by users
#include <stdio.h>
void main()
{
    // create variable
    int num1, num2, addition, subtraction, multiplication;
    float division;
    printf("Enter number 1 ");
    scanf("%d", &num1);
    printf("Enter number 2 ");
    scanf("%d", &num2);
    // process
    // variablename-1 = variable-name2 symbol(+-*/) variablename-3
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = (float) num1 / num2;

    // output
    printf("addition = %d", addition);
    printf("\nsubtraction = %d", subtraction);
    printf("\nmultiplication = %d", multiplication);
    printf("\n division = %.2f", division);

}