#include<stdio.h>

int main()
{
    int i;
    int max = 300;
    int c = 0;
    int sum = 0;

    for(i = 1;i < 300;i++)
    {
        if((i%3) == 0 && (i%4) == 0)
            {
                printf("%d\n",i);
                c+=1;
                sum+=i;
            }
        else
            continue;
    }
    printf("Count of the numbers = %d\n", c);
    printf("\nsummation of the numbers = %d", sum);
}