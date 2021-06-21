#include <stdio.h>

void swap_func(int *i, int *k);
int main()
{
    int i;
    int k;

    printf("Enter the first number:");
    scanf("%d", &i);
    printf("\nEnter the second number:");
    scanf("%d", &k);

    printf("\nThe number i is = %d and the number k = %d", i,k);

    swap_func(&i,&k);
    printf("\nAfter applying the swap function the number i is = %d and the number k = %d", i,k);   

    return 0; 
}
void swap_func(int *i, int *k)
{
    int swap;

    swap = *i;
    *i = *k;
    *k = swap;
}