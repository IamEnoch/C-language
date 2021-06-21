#include<stdio.h>

void swap_func(int *a, int *b);

int main()
{
    int i,j;

    printf("Enter the first number: ");
    scanf("%d", &i);
    printf("\nEnter the second number: ");
    scanf("%d", &j);
    printf("\nThe fist number is i = %d and the second number j = %d", i,j);
    
    swap_func(&i,&j);
    printf("\nAfter the swap function is called, the first number is i = %d and the second number j = %d", i,j);
}
void swap_func(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
