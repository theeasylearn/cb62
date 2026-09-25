// write a program to convert given inches into foot and remaining inches. 
/* 
    minutes : 30  output 2 foot 5 inches 
*/
#include<stdio.h>
void main()
{
    int inches,foot;
    printf("enter inches");
    scanf("%d",&inches); //30

    foot = inches/12;
    inches = inches%12; 

    printf("%d foot %d inches",foot,inches);
}