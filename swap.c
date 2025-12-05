//use pointers to swap numbers
#include <stdio.h>
int main (void){
    int a,b;
    printf("enter two numbers: \n");
    scanf("%d %d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swapping a=%d b=%d\n",a,b);
    return 0;
    
}