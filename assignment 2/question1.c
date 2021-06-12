/*By the use of a nested loop, design a program that can provide the output below.                  
1
1	2
1	2	3
1	2	3	4
1	2	3	4	5   */

#include<stdio.h>

int main()
{
    int i;
    int j;

    for(i = 1;i <= 4; i++)
    {
        for(j = 1;j <=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    
}
