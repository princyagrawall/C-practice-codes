#include <stdio.h>
int main() {
    int num = 100;
    printf("Global num = %d\n", num);  
     {
        int num = 50;
        printf("Local num = %d\n", num);  
    }
   
         printf("Global num again = %d\n", num); 

    return 0;
}
