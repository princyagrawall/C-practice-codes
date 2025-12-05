//define typedef for long int as lint
#include <stdio.h>
typedef long int lint;
int main(void){
    lint a,b;
    printf("enter two long integers: ");
    scanf("%ld %ld",&a,&b);
    printf("you entered %ld and %ld\n",a,b);
    return 0;
}