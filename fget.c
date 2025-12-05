#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt", "r");

    if (fptr == NULL){
        printf("ERROR! file doesn't exist");
        return 1;
    }

    int ch;
    ch =fgetc(fptr);

    while (ch != EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
     fclose(fptr);
    return 0;
}