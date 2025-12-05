#include <stdio.h>


void admin(){
    char choice[5];
    char symptom[20];
    printf("-----------------------\n");
    printf("ADMIN MODE\n\n");
    while(1) {
        printf("Enter the symptom:");
    scanf("%s",symptom);
    char medicine1[20];
    char medicine2[20];
    char medicine3[20];
    printf("Enter the medicines:");
    scanf("%s %s %s",medicine1, medicine2 ,medicine3);

    printf("Do you want to enter more symptoms?(y/n)");
    scanf("%s",choice);
    if( strcmp(choice,"no")==0|| strcmp(choice,"NO")==0)
    break;
    }
    

    
    printf("-----------------------\n");
    
}

void user(){
    char symptom[20];
    printf("-----------------------\n");
    printf("USER MODE\n\n");
    printf("Enter the symptom:");
    scanf("%[^\n]",symptom);
    printf("Medicines");



    printf("-----------------------\n");
   
}
    void plain(){
    int n;
    printf("-----------------------\n");
    printf("ENTER THE MODE\n");
    printf("1.ADMIN \n2.USER\n");
    scanf("%d",&n);
    if (n==1) {
        admin();
    }
    else {
        user();
    }
}

int main(){
    plain();

    
}