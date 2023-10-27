#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, side3, semiPerimeter, area;

    // Input the lengths of the three sides
    printf("Enter the length of the first side: ");
    scanf("%lf", &side1);
    printf("Enter the length of the second side: ");
    scanf("%lf", &side2);
    printf("Enter the length of the third side: ");
    scanf("%lf", &side3);

    // Calculate the semi-perimeter
    semiPerimeter = (side1 + side2 + side3) / 2.0;

    // Calculate the area using Heron's formula
    area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    // Output the area
    printf("The area of the triangle is: %lf\n", area);

    return 0;
}
