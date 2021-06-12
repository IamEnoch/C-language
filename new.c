#include<stdio.h>

int main()
{
AgeHgender();
return 0;
}
void AgeHgender()
{
int h;
printf("inpur your height?\n");
scanf("%d",&h);
char g;
printf("Input your gender\n");
scanf("%c",&g);
printf("%d is your height and %c is your gender",h ,g);
}