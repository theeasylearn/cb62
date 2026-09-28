// write a program to accept time from user in 24 hours format. convert it into 12 hours format.
#include <stdio.h>
// write a program to findout heaviest person in weight from 3 person's weight given by user.
void main()
{
     float weight1, weight2, weight3;
     printf("Enter 1st person weight");
     scanf("%f", &weight1);

     printf("Enter 2nd person weight");
     scanf("%f", &weight2);

     printf("Enter 3rd person weight");
     scanf("%f", &weight3);

     if (weight1 > weight2)
     {
          if (weight1 > weight3)
          {
               printf("1st person is heaviest person");
          }
          else
          {
               printf("3rd person is heaviest person");
          }
     }
     else
     {
          if (weight2 > weight3)
          {
               printf("2nd person is heaviest person");
          }
          else
          {
               printf("3rd person is heaviest person");
          }
     }
}
