// write a program to calculate & display area of circle 
#include <stdio.h>
void main()
{
    int radius;
    float area;

    printf("enter radius");
    scanf("%d",&radius);

    //process 
    area = 3.14 * radius * radius;
    printf("area = %.2f",area);
}