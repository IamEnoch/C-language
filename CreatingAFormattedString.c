//sprintf is used to build a string from other data types

#include<stdio.h>

int main()
{
    char string[100];
    char inst[] = "Dedan Kimathi University of technology";
    int population = 4000;

    sprintf(string, "The population of %s is %d", inst, population);

    printf("\n%s", string);

    return 0;
}