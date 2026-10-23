//example of string in c language 
#include<stdio.h>
//create constant 
#define SIZE 32
void main()
{
    //create string(1d array)
    char name[SIZE];

    //ACCEPT INPUT 
    printf("Enter Name");
    scanf("%s",name); //never use & and do not give position sign for string in scanf function

    //display name
    printf("your name is %s",name);
    
}
