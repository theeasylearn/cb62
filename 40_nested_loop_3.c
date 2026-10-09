/*
         *   
       * *   
     * * *   
   * * * *   
 * * * * *   
 */

#include <stdio.h>
void main()
{
    int space = 1,row=4;
    do 
    {
        space = 1;
        do
        {
            printf("#");
            space = space + 1;
        } while (space <= row);
        printf("\n");
        
        row--;
    }while(row>=1);
}