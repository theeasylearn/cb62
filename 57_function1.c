#include<stdio.h>
// write a program to convert fahrenheit into celsius  
// example of user defined function 
// function definition (create function)
// return type function-name(arguments/input)
// function that return value with argument argument 
float toCelsius(float fahrenheit)
{
    //local variable 
    // process
    float celsius = (5.0/9) * (fahrenheit - 32);
    return celsius;
}
// function that return value but has no argument 
float getPi()
{
    //local variable
    float pi = 22/7.0; //process
    return pi;
}
void main()
{
    float fahrenheit,celsius,area;
    int radius;
    printf("Enter fahrenheit to convert it into celsius");
    scanf("%f",&fahrenheit);

    //function call/run/execute
    celsius = toCelsius(fahrenheit);
    printf("Celsius = %.2f",celsius);

    printf("\nEnter radius to findout area of circle");
    scanf("%d",&radius);

    area = getPi() * radius * radius; 
    printf("Area of circle = %f",area);


}