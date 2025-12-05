#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt", "r");

    if (fptr == NULL){
        printf("ERROR! file doesn't exist");
        return 1;
    }

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c", ch);
    fclose(fptr);
    return 0;
}