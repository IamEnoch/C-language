#include<stdio.h>

int main(){
    int i1 = 10;
    int i2 = 3;
    int quotient, remainder;
    float f1 = 4.2;
    float f2 = 2.5;
    float result;

    quotient = i1 / i2;
    remainder = i1 % i2;
    result = f1 / f2;

    printf("%d\n", quotient);
    printf("%d\n", remainder);
    printf("%f\n", result);

   int z = 3;
   int x = z--;
   int y = 3;
   int t = ++y;
   printf("z is: %d ,x is: %d , y is: %d and t is: %d", z, x, y, t);



    return 0;
}