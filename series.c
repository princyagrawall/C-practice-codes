#include <stdio.h>

int main() {
    int n, count = 1;
    int num1 = 0, num2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (count <= n) {
        printf("%d ", num1);
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
        count++;
    }

    return 0;
}
