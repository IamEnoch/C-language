#include <stdio.h>

int main(){
    char a[100];
    int b;
    
    gets(a);

    printf("You entered: ");
    puts(a);

    scanf("%d", &b);
    printf("%d", b);

    return 0;
}