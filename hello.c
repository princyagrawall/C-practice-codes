#include <stdio.h>
int main(void){
    int n;
    printf("enter a number; ");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("%d is divisable by 3 and 5",n);

    }
    else {
        printf("%d is not divisable by 3 and 4",n);
        return 0;
    }
}