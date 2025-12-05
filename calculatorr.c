#include <stdio.h>
int main(void){
    int a,b;
    char operator;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("enter a operator: ");
    scanf("%c",&operator);


    switch(operator){
        case '+': 
        printf("%d",a+b);
        break;
        case '-': 
        printf("%d",a+b);
        break;
        case '*': 
        printf("%d",a+b);
        break;
        case '/': 
        printf("%d",a+b);
        break;
        default:
        printf("there is no such operator");
     }
     return 0;
    }
    