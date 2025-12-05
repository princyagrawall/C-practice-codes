#include <stdio.h>
#include <string.h>

struct marks{
    float maths;
    float hindi;
    float english;
    float physics;

};

struct student {
    int sapid;
    char student_name[30];
    struct marks marks;
    };

int main(void){
    struct student students[3];
    printf("student record software...welcome!!!");
    
    for (int i=0;i<3;i++);
    struct student currentstudent = students[i];
    printf("enter the details of the student %i\n",i+1);
    printf("enter the name of the student: \n");
    strcpy currentStudent.name, ("%s",&currentstudent.name);

    printf("enter the sapid of the student: \n");
    scanf("%d",&currentstudent.sapid);

    printf("enter the marks for the subkject, maths , hindi, english, physics");
    scanf("%d %d %d %d", &currentstudent.marks.maths &currentstudent.marks.hindi &currentstudent.marks.english )
    
    
    
}