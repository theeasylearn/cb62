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
    gets(name); //gets function can accept string with space 

    //display name
    printf("your name is %s\n",name); // OR
    puts(name);
    
}
