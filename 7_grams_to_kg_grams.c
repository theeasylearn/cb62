/* write a program to convert grams into kg and remaining grams 
    input : 1800 grams output 1 kg and 800 grams: 
*/
#include<stdio.h>
void main()
{
    int grams,kg;
    printf("enter grams");
    scanf("%d",&grams);

    kg = grams / 1000;
    grams = grams % 1000;

    printf("%d kg %d grams",kg,grams);
    
}