#include <stdio.h>

union data {
    int i;
    float f;
    char str[10];
};
int main(){
    union data d;
    d.i=10;
    printf("d.i=%d\n",d.i);
    d.f=220.5;
    printf("d.f=%2f\n",d.f);
    printf("d.i(after assigning float)=%d\n",d.i);
    return 0;

}

