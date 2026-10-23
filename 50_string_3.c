// example of string in c language
#include <stdio.h>
// create constant
#define SIZE 32
#define ROW 3
void main()
{
    // create 2D array
    char NAMES[ROW][SIZE];

    for(int index=0;index<3;index++)
    {
        printf("Enter %d name",index+1);
        gets(NAMES[index]);
    }

    for(int index=0;index<3;index++)
    {
        printf("name = %s \n ",NAMES[index]);
        
    }
}
