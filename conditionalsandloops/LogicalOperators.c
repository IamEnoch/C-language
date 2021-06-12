#include<stdio.h>

/*The logical OR operator || returns a true result when 
any one expression
or both expressions are true.*/
int main(){
    int n = 102;
    if (n>1 && n<100)
        printf("Number is within range 1-100");
    else
        printf("Not within the range");

}