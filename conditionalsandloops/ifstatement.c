#include<stdio.h>

int main(){
    int score = 89;

    /*An expression
    that evaluates to a non-zero value is considered true.*/
    if (score)
    printf("you passed.\n");

    int num = 77;
    num += 1;
    if (num == 77)
        printf("very correct");
    else
        printf("Wrong try again");
    
}