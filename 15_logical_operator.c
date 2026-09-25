#include <stdio.h>
void main()
{
    int a = 10, b = 20, c = 30, result;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    result = a < b && b < c; // 1
    printf("%d = %d < %d && %d < %d \n", result, a, b, b, c);

    result = a > b && b < c; // 0
    printf("%d = %d > %d && %d < %d \n", result, a, b, b, c);

    result = a < b && b > c; // 0
    printf("%d = %d < %d && %d > %d \n", result, a, b, b, c);

    result = a > b && b > c; // 0
    printf("%d = %d > %d && %d > %d \n", result, a, b, b, c);

    result = a < b || b > c; // 1
    printf("%d = %d < %d || %d > %d \n", result, a, b, b, c);

    result = a < b || b < c; // 1
    printf("%d = %d < %d || %d < %d \n", result, a, b, b, c);

    result = a > b || b < c; // 1
    printf("%d = %d > %d || %d < %d \n", result, a, b, b, c);

    result = a > b || b > c; // 0
    printf("%d = %d > %d || %d > %d \n", result, a, b, b, c);

    result = !(a > b || b > c); // 1
    printf("%d = !(%d > %d || %d > %d) \n", result, a, b, b, c);

}