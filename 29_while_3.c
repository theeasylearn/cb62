// fibonaci series
// 0 1 1 2 3 5 8 13 21 ..... 100
//       p c n
#include <stdio.h>
void main()
{
    int previous = 0;
    int current = 1;
    int next;
    printf("%d ", previous);
    printf("%d ", current);
    while(previous<=100)
    {
        //loop body
        next = previous + current;
        printf("%d ", next);
        previous = current; // 1
        current = next;
    }
}