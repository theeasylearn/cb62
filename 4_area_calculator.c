// write a program to findout & display area of room using given length and width
#include<stdio.h>
void main()
{
    float length,width,area;
    printf("enter length");
    scanf("%f",&length);
    printf("enter width");
    scanf("%f",&width);

    //calculate area (process)
    area = length * width;
    printf("area = %.2f",area);
}