// write a program to findout print following series
// a b c d e f..... z
#include <stdio.h>
void main()
{
    int ascii;
    char letter;

    letter = ascii; // when we copy integer variable value into character variable, it actually store character code into it.
    for (ascii = 97; ascii <= 123; ascii++)
    {
        printf("%c  ", letter);
        letter = ascii; // b
    }
}