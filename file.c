#include <stdio.h>
#define PI 3.14159   // Define value of π

int main(void) {
    float radius, area;

    // Ask user for radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate area
    area = 4 * PI * radius * radius;

    // Print result
    printf("Surface Area of Sphere = %.2f\n", area);

    return 0;
}
