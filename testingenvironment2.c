/*Design a program with three functions: main(), add(), and diff(). 
Function main receives two integer numbers then either of the two functions add() or diff() is called for execution. 
Function diff is called if the first number is greater than the second and computes the 
difference between the first and second number, 
otherwise function add() is called and does the summation of the two numbers. The results are displayed in the main function().*/

#include <stdio.h>

void add(int, int);
void diff(int, int);

int main()
{
  int first,second;
  printf("Enter the first integer:");
  scanf("%d", &first);

  printf("\nEnter the second integer:");
  scanf("%d", &second);

  if(first > second)
  {
    diff(first, second);
  }
  else
  {
    add(first, second);
  }
}
void diff(int a, int b)
{
  int diff;
  diff = (a - b);
  printf("\nThe difference of the numbers is: %d", diff);
}
void add(int a, int b)
{
  int add;
  add = (a + b);
  printf("\nThe summation of the numbers is: %d", add);
}