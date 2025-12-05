#include <stdio.h>
struct Marks{
    int roll;
    int subject[3];
};

int main(){
    struct Marks m = {101, 68, 75, 23};
    printf("roll: %d\n Marks: %d %d %d \n", m.roll, m.subject[0], m.subject[1], m.subject[2]);

}