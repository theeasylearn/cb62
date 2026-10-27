// array of structure
#include <stdio.h>
#define SIZE 32
#define SMALL_SIZE 34
// create structure
struct book
{
    char name[SIZE], author[SMALL_SIZE];
    int price, pages;
}; // 128 + 32 + 4 + 4 = 128 + 40 = 170

void main()
{
    // array of book structure
    struct book list[5]; // 0 1 2 3 4

    for (int index = 0; index < 5; index++)
    {
        printf("Enter %d book detail ", index + 1);
        fflush(stdin);
        printf("\n Enter book name");
        gets(list[index].name);
        printf("Enter author name");
        fflush(stdin);
        gets(list[index].author);
        fflush(stdin);
        printf("Enter book price");
        scanf("%d", &list[index].price);
        printf("Enter book pages");
        scanf("%d", &list[index].pages);
    }
    printf("\n%-40s %-40s %10s %10s",
           "Book Name",
           "Author",
           "Price",
           "Pages");
    printf("\n%-40s %-40s %10s %10s",
           "----------------------------------------",
           "----------------------------------------",
           "----------",
           "----------");
    for (int index = 0; index < 5; index++)
    {
        printf("\n%-40s %-40s %10d %10d", list[index].name, list[index].author, list[index].price, list[index].pages);
    }
    // findout total price of all book 
    // findout book with lowest and highest price 
}