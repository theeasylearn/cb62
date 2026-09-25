// write a program to findout whether given shape is landscape or portrait
#include <stdio.h>
void main()
{
    float length, width;
    printf("Enter length");
    scanf("%f", &length);

    printf("Enter width");
    scanf("%f", &width);

    if (width < length)
    {
        printf("given shape is portrait");
    }
    else
    {
        printf("given shape is landscape");
    }
    printf("\n good bye");
}