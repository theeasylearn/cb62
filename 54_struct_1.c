#include <stdio.h>
// create structure
struct student
{
    char name[32];
    int age;
    float weight;
};
void main()
{
    // create structure variable
    struct student s1;
    printf("Enter Student Name");
    gets(s1.name);

    printf("Enter age");
    scanf("%d", &s1.age);

    printf("Enter weight");
    scanf("%f", &s1.weight);

    printf("Name = %s age = %d weight = %f", s1.name, s1.age, s1.weight);
    
}