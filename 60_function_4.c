#include <stdio.h>
// pass by reference 
void swap(int *x, int *y) // x = 10 y = 20
{
    printf("\n before swap x = %d y = %d ", *x, *y);
    int temp = *x; // 10
    *x = *y;        // 20
    *y = temp;     // 10
    printf("\n after swap x = %d y = %d ", *x, *y);
}
void main()
{
    int a,b;
    printf("Enter value for a");
    scanf("%d",&a);
    printf("Enter value for b");
    scanf("%d",&b);
    printf("\n before function call a = %d b = %d ", a, b);   
    swap(&a,&b);
    printf("\n after function call a = %d b = %d ", a, b);   

}