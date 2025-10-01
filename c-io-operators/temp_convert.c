#include <stdio.h>

/**
 * main - the main function
 * description: Reads a temperature in Celsius and converts it to Fahrenheit
 * return: 0
 */
int main() {
    float celsius, fahrenheit;  // variables to hold the input and converted value

    printf("Enter temperature in Celsius: ");  // prompt the user
    scanf("%f", &celsius);  // read a float into variable celsius

    // Conversion formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Print result with 2 decimal places
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;  // program ends successfully
}
