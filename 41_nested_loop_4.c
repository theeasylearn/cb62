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
  int space = 1, row = 5;
  do //outer loop
  {
    space = 1;
    while (space <= row - 1) // inner do while loop
    {
      printf(" ");
      space = space + 1;
    }
    
    //inner for loop 
    for (int astrik = 1; astrik <= 5 - row + 1; astrik++)
    {
      printf(" *");
    }
    printf("\n");

    row--;
  } while (row >= 1);
}