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
        printf("it is vowel");
        break;
    case 'e':
    case 'E':
        printf("it is vowel");
        break;
    case 'i':
    case 'I':
        printf("it is vowel");
        break;
    case 'o':
    case 'O':
        printf("it is vowel");
        break;
    case 'u':
    case 'U':
        printf("it is vowel");
        break;
    default:
        printf("it is not vowel");
    }
    printf("\n good bye");
}