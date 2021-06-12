#include<stdio.h>

int main()
{
    float test_scores[3] = {3.125, 2.555, 3.556};
    float total = 0;
    int k;
    
    for(k = 0;k < 3;k++)
    {
        total += test_scores[k];
    }

    printf("The total number of the test scores is: %6.2f\n",total);


    int chess_table [2][3] = 
    {
        {3,3,5},
        {4,3,6}
    };
    
    printf("The following is element 3 in row 2; %d", chess_table[1][2]);
}