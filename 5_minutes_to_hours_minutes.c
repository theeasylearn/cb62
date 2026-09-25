// write a program to convert given minutes into hours and remaining minutes. 
/* 
    minutes : 90  output 1 hour 30 minutes 
    minutes : 129 output 2 hours and 9 minutes
*/
#include<stdio.h>
void main()
{
    int minutes,hours;

    printf("enter minutes");
    scanf("%d",&minutes); //90

    hours = minutes / 60; //1
    minutes = minutes % 60; 

    printf("hours = %d minutes = %d",hours,minutes);
    
}