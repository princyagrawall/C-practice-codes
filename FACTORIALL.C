#include <stdio.h>

unsigned int factorial(unsigned int n){
int output = 1;
for (unsigned int i = 2; i <= n; i++){
  output *= i;
}
return output;
}
int main(){
unsigned int inputN;
unsigned int shouldContinue;
do{
   printf("********************************************\n");
    printf("\tFactorial Calculating Juice Machine\n");
printf("********************************************\n");
printf("Enter the magic number for which you want to find the factorial: ");
scanf("%d", &inputN);
printf("The factorial value of %d is: %d \n", inputN, factorial(inputN));

printf("Do you want to find factorial for another number? (0-No, any other number - yes)");
scanf("%d", &shouldContinue);
}
while(shouldContinue);
}
