#include <stdio.h>
int main(void){
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is thr largest among all",a);
    }
    
    else if (b>a && b>c){
        printf("%d is the largest among all",b);

    }
    else {
        printf("%c is the largest among all",c);
    }
    return 0;
 }
