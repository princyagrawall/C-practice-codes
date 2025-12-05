//Create a structure for employee details.
#include <stdio.h>
#include <strings.h>
struct Employee{
    int id;
    char name[5];
    float salary;
    char company[5];
};
int main(void){ 
    for (int i=0;i<5;i++){

    struct Employee employee1, employee2,employee3,employee4,employee5;
    strcpy(employee1.name,"ram");
    strcpy(employee1.company,"abc");
    employee1.id=101;
    employee1.salary=10000;
    printf("employee name is: );
    printf("employee id is %d\n",employee1.id);
    printf("employee salary is %f\n",employee1.salary);
    printf("employee company is %s\n",employee1.company);
    }
    return 0;
}