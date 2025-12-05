// Write a switch-case calculator that supports +, -, *, /.
#include <stdio.h>
int main(void){
    int x,y;
    char operator;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("enter the operator:");
    scanf(" %c",&operator);
    if (operator=='+'){
        printf("result=%d",x+y);
    }
    else if(operator=='-'){
        printf("result is %d",x-y);

    }
    else if(operator=='*'){
        printf("result is %d",x*y);
    }
    else {

        printf("result is %d",x/y);
    } 
    return 0;
}
