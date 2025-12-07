//Rotate an array by 2 positions to the left.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp1 = arr[0], temp2 = arr[1];
    for(i = 0; i < n-2; i++) {
        arr[i] = arr[i+2];
    }
    arr[n-2] = temp1;
    arr[n-1] = temp2;

    printf("Array after left rotation by 2: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
