#include<stdio.h>
#define SIZE 40

struct student
{
    char name[SIZE];
    int marks;
};
void main()
{
    int marks;
    struct student mystudent;
    
    printf("Please enter the name of the student\n");
    scanf("%s", mystudent.name);
    printf("Print the marks for the student\n");
    scanf("%d", marks);

   // printf("%s and %d is the name of the name and the marks of the student respectively", mystudent.name,mystudent.marks);

    printf("skipped");
}