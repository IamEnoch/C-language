/*7. Write a program in C to display the multiplication table of a given integer. (8mks) 
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150*/
#include<stdio.h>

int main()
{
    int num;

    printf("Key in your number:\n");
    scanf("%d", &num);

    for(int i = 1;i <= 10;i++)
    {
        printf("%d x %d = %d \n", num,i,(num*i));
    
    }
}
