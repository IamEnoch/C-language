/*Write a program in C to make such a pattern like right angle triangle with a number which 
will repeat a number in a row. (4 mks) 
The pattern like :
 1
 22
 333
 4444*/

#include<stdio.h>

int main()
{
    int i;
    int j;
    for(i = 1;i <= 4;i++)
    {
        for (j = 1; j<=i; j++)
        {
            printf("%d",i);
        }
       printf("\n");
    
    }

}