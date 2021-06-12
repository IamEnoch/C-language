#include <stdio.h>
int main(){
    int x = 10, y = 20, z;
    for(z = 0;z<y;z++)
    {
        if(z==x){
            printf("%d\n",z);
        }
        else{
            break;
        }
    }
}
