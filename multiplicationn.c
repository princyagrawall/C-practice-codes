#include <stdio.h>
int main(void){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    for (int i=1;i<=50;i++){
        printf(" %d * %d= %d\n",a,i, a*i);
    }
    return 0;
} 