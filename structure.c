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

    struct Employee employee1;

    struct Employee employees[5];
    int index;

    for ( index = 0; index < 5; index++){
        struct Employee currentEmployee = employees[index];

        printf("Enter the name of the employee : ");
        scanf("%s", &currentEmployee.name);

        printf("\nEnter the company name of the employee : ");
        scanf("%s", &currentEmployee.company);

        printf("\nEnter the id of the employee : ");
        scanf("%i", &currentEmployee.id);

        printf("\nEnter the salary of the employee : ");
        scanf("%f", &currentEmployee.salary);
        
    }

    // struct employee employee1, employee2,employee3,employee4,employee5;
    // strcpy(employee1.name,"ram");
    // strcpy(employee1.company,"abc");
    // employee1.id=101;
    // employee1.salary=10000;
    // printf("employee name is %s\n",employee1.name);
    // printf("employee id is %d\n",employee1.id);
    // printf("employee salary is %f\n",employee1.salary);
    // printf("employee company is %s\n",employee1.company);

    return 0;
}