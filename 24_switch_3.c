/*
    write a program to accept findout whether given letter is vowel or not.
    english alphabets a, e, i, o, u are called vowels
*/
#include <stdio.h>
void main()
{
    char letter;
    printf("Enter any one letter");
    scanf("%c", &letter);
    switch (letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("it is vowel");
        break;
    default:
        printf("it is not vowel");
    }
    printf("\n good bye");
}