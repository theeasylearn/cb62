#include <stdio.h>
void main()
{
    int a = 10, b = 20, c = 10, result;
    printf("a = %d, b = %d, c = %d", a, b, c);

    result = a == b; // 10 == 20
    printf("\n%d = %d == %d", result, a, b);

    result = a != b; // 10 != 20
    printf("\n%d = %d != %d", result, a, b);

    result = a < b; // 10 < 20
    printf("\n%d = %d < %d", result, a, b);

    result = a > b; // 10 > 20
    printf("\n%d = %d > %d", result, a, b);

    result = a <= c; // 10 <= 10
    printf("\n%d = %d <= %d",result,a,c);

    result = a >= c; // 10 >= 10
    printf("\n%d = %d >= %d",result,a,c);

}