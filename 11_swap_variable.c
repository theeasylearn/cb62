/*
    write a program to swap value of two variable using 3rd variable;
*/
#include <stdio.h>
void main()
{
    int a,b, temp;
    printf("Enter value for A");
    scanf("%d",&a); // 10
    printf("Enter value for B");
    scanf("%d",&b); // 20

    temp = a; //temp = 10
    a = b; //a = 20
    b = temp; // b = 10
    printf("a = %d b = %d",a,b);
}