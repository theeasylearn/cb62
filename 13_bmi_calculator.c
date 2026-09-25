// write a program to calculate BMI of person 
#include<stdio.h>
void main()
{
    float weight,meter,bmi;
    int feet,inch,total_inches;
    printf("Enter your weight in kg");
    scanf("%f",&weight);
    printf("enter your height detail ");
    printf("\n enter only feets");
    scanf("%d",&feet);
    printf("\n enter only remaining inches");
    scanf("%d",&inch);
    // calculate total inch
    total_inches = (feet * 12) + inch;
    //calculate meter 
    meter = total_inches / 39.37;
    //calculate bmi 
    bmi = weight / (meter * meter);
    printf("BMI is %.2f",bmi);

}