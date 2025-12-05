#include <stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("student.txt","w");
    char name[50];
    int age;
    float cgpa;
    printf("enter the name:");
    scanf("%s",name);
    printf("enter the age; ");
    scanf("%d",&age);
    printf("enter the cgpa:");
    scanf("%f",&cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

    fclose(fptr);
    return 0;
}