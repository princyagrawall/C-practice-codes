#include <stdio.h>
int main(void) {
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a , &b , &c );
    if (a>=b && a>=c){
        printf(" %d is the largest",a);
    }
        else if (b>=a && b>=c){
            printf("%d is the largest number",b);
        }
            else {
                printf("%d is the largest",c);
            }
        

    
    return 0;
}