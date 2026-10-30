#include<stdio.h>
// create union 
union family 
{
    char isMarried;
    int children;
};
void main()
{
    //create union type variable
    union  family f1;
    f1.isMarried = 'f';

    printf("is Married = %c no of child = %d",f1.isMarried,f1.children);

    f1.children = 1;
    printf("\n is Married = %c no of child = %d",f1.isMarried,f1.children);
}