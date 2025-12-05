#include <stdio.h>
int main(){
    FILE *ptr;
    ptr= fopen("oddnumbers.txt","w");

    int n;
    printf("Enter the number till when u want to write odd numbers:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        if( i % 2 != 0 ){
            fprintf(ptr,"%d",i);
        }
    }
    fclose(ptr); 
    
    return 0;

}