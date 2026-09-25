/*
    write a program to swap value of two variable without 3rd variable;
*/
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter value for A");
    scanf("%d",&a); // 10
    printf("Enter value for B");
    scanf("%d",&b); // 20

    a = a + b; // 30
    b = a - b; // 10
    a = a - b; // 20
    printf("a = %d b = %d",a,b);
}