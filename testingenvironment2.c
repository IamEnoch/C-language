#include <stdio.h>

int main()
{
    int k,z;
    char a = '*';

    for(k=5;k>=1;k--)
    {
        for(z=1;z<=5;z++)
        {
            if (z>=k)
            {
                printf("%c", a);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}