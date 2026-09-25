// write a program to calculate & display total and percentage of student's 5 subject marks.
#include <stdio.h>
void main()
{
    int maths,science,english,hindi,gujarati,total;
    float percentage;

    printf("Enter maths subject marks ");
    scanf("%d",&maths);

    printf("Enter science subject marks ");
    scanf("%d",&science);

    printf("Enter english subject marks ");
    scanf("%d",&english);

    printf("Enter hindi subject marks ");
    scanf("%d",&hindi);

    printf("Enter gujarati subject marks ");
    scanf("%d",&gujarati);

    //process 
    total= maths+science+english+hindi+gujarati;
    printf("total = %d",total);

    //average 
    percentage = total/5;
    printf("\n percentage = %.2f",percentage);

}