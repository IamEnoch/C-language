//crate a square function, input a number and run it
#include<stdio.h>

int square (int i);

int main()
{
    int x = 5;
    int result;

    result = square(x);

    printf("The square of %d is %d",x,result);

    return(0);
}
int square (int i)
{
    int y;

    y = i * i;

    return(y);
}