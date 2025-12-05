#include <stdio.h>
#include <string.h>

struct Marks{
    float maths;
    float hindi;
    float english;
    float average;
    
};

struct Student{
    char name[20];
    int rollno;
    struct Marks Marks;


};
int main(void){
    printf("========STUDENTS REPORT CARDS==========\n");

int n;
printf("enter the number of students in class:");
scanf("%d",&n);

struct Student s[n];  

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);  

        printf("Enter marks of 3 subjects: MATHS HINDI ENGLISH\n");
        scanf("%f %f %f", &s[i].Marks.maths, &s[i].Marks.hindi, &s[i].Marks.english);

        printf("Average marks:");
        scanf("%f",s[i].Marks.average);

        
    }

    printf("************STUDENT DETAILS***********");    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: \n Maths=%.1f \n Hindi=%.1f \n English=%.1f\n", 
               s[i].Marks.maths, s[i].Marks.hindi, s[i].Marks.english);
        
    }

    return 0;
}
