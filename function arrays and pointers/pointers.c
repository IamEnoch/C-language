#include<stdio.h>

int main()
{
    int x = 2;
    int *p = NULL;
    p = &x;

    printf("\nThe address of x is %x\n", &x);
    printf("P contains the address %x\n", p);
    printf("The value of X is %d\n", x);
    printf("p is pointing to the value %d\n", *p);
}