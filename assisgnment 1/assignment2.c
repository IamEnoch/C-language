#include <stdio.h>

int main()
{
    float a, b, c, d, e;

    printf("Enter any 5 numbers \n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    printf("Result will have the first number divided by the second and the answer multiplied by the third entity\nadded to the fourth and subtracted by the fifth\n1");
    printf("Result: %f", (a / b) * c + d - e);

    return 0;


}