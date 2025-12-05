//Write a program using arrays to store 5 marks
#include <stdio.h>

typedef char Name[10];
int main(void){
    int marks[5]={85,90,98,96,98};
    Name student[5] = {"ram","shyam", "hari", "gita", "sita"};

    for (int i=0;i<5;i++){

        printf("marks of student %s is %d\n",student[i],marks[i]);

    }
    return 0;
}