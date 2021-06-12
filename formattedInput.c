#include<stdio.h>
char text[20];
int a, b;

int main(){
//Have the input as required that yout want 
printf("Input any details with regard to the scanf code\n");
/*Write the formatted input code*/
scanf("%2d %d %*f %3s", &a, &b, text);
//print an output with regards to the input
printf("The following is the output:\n %d %d %s", a, b, text);
}