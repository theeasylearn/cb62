#include <stdio.h>
void main()
{
    int a = 10, b = 3;
    printf("a = %d, b = %d \n", a, b);

    // a = a + b;
    a += b;
    printf("\n after addition a = %d, b = %d", a, b);

    // a = a - b;
    a -= b;
    printf("\n after subtraction a = %d, b = %d", a, b);

    // a = a * b;
    a *= b;
    printf("\n after multiplication a = %d, b = %d", a, b);

    // a = a / b;
    a /= b;
    printf("\n after division a = %d, b = %d", a, b);

    // a = a % b;
    a %= b;
    printf("\n after modulo a = %d, b = %d", a, b);
}