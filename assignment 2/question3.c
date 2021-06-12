#include <stdio.h>
void main()
{       
    int i;
    int n;
    int sum=0;
	float average;
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
                printf("This is number %d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	average=sum/10.0;
	printf("The sum of the 10 numbers is : %d\nThe Average of the numbers is : %f\n",sum,average);
 
}
