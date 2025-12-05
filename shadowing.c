#include <stdio.h>
int main(void){
    int x=50;
    printf("number is %d\n",x);
    if (1){
        int x=10;
        printf("number is %d\n",x);
        
    }
    printf("number after inner scope: %d",x);
    return 0;
}
