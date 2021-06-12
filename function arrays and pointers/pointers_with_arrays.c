#include<stdio.h>

int main()
{
    int a[5] = {2,3,7,4,1};
    int *p = NULL;
    int i;

    p = a;
    for(i=0;i<5;i++)
    {
        printf("%d\n", *(p + i));
    }
    printf("%d", *p);
}