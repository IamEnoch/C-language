#include<stdio.h>

void swap_func(int *x, int *y);
int main()
{
    int num1;
    int num2;
    
    printf("\nEnter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    printf("\nNUM 1 = %d and NUM 2 = %d\n", num1,num2);

    swap_func(&num1, &num2);

    printf("\nAfter swapping, NUM 1 = %d and NUM 2 = %d", num1,num2);
    
}
void swap_func(int *x, int *y)
{
    int store;

    store = *x;
    *x = *y;
    *y = store;
}