//Given an array of 7 integers, compute the sum and average.
#include <stdio.h>

int main() {
    int arr[7];
    int i, sum = 0;
    float average;

    printf("Enter 7 integers:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / 7.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
