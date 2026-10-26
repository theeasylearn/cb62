// write a program to convert uppercase string into lower case string
// input : WELCOME
// display : welcome
#define SIZE 32
#include <stdio.h>
#include <string.h>
void main()
{
    // create 2 string
    char upper[SIZE] = "THE EASYLEARN ACADEMY 105", lower[SIZE], letter;
    int ascii, index, size = strlen(upper);
    for (index = 0; index < size; index++)
    {
        letter = upper[index]; // W
        // GET ASCII CODE
        ascii = letter; // when we store char variable into integer variable we get ascii value of char
        if (ascii >= 65 && ascii <= 97)
        {
            // add 32
            ascii = ascii + 32;
            // when we store int variable into char variaable, we got letter at given ascii;
            letter = ascii; // w
        }
        lower[index] = letter;
    }
    lower[index] = '\0';
    puts(lower);
}
