#include <stdio.h>
#include <math.h>

int main()
{
    const float PI = 3.142;
    float r;
    float area;

    printf("Enter the value of the radius:\n");
    scanf("%f", &r);

    printf("Area: %f", PI * (int)pow(r, 2));
    
    return 0;

}