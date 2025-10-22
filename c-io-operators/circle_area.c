#include <stdio.h>

// This program reads the radius of a circle from the user and prints its area.

/**
 * main - the main function
 * description: Reads a radius (float) and prints the area using π = 3.14
 * return: 0
 */
int main() {
    float radius;             // variable to store the radius entered by the user
    const float PI = 3.14f;   // constant for π (3.14)

    printf("Input the radius of the circle: ");  // prompt the user
    scanf("%f", &radius);                        // read a float from keyboard into 'radius'

    float area = PI * radius * radius;           // area formula: π * r * r

    printf("The area of the circle is: %.4f\n", area); // print area with 4 decimal places
    return 0;
}
