#include<stdio.h>

int i,j;

i = 1;

int main()
{
do
{
    for(j=1;j<=i;j++)
    {
        printf("%d", j);
    }
    printf("\n");
    i++;
}
while(i<=5);
}