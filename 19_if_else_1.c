// write a program to findout which person is taller in 2 person's given height
#include<stdio.h>
void main()
{
    float height1,height2;
    printf("Enter 1st person height");
    scanf("%f",&height1);

    printf("Enter 2nd person height");
    scanf("%f",&height2);

    if(height1>height2) //< > <= >=
    {
        printf("1st person is taller then 2nd person");
    }
    else 
    {
        printf("2nd person is taller then 1st person");
    }
    printf("\n good bye");
}