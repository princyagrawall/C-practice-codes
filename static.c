#include <stdio.h>
extern int external_variable;
void print_static(){
    static int static_variable=0;
static_variable++;
printf("static variable is : %d",static_variable);
}
int main (void){
    print_static();
    printf("external variable is %d\n", external_variable);
    return 0;
}