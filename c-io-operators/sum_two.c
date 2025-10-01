#include <stdio.h>   // library for input/output functions

/**
 * main - the main function
 * description: asks the user for two integers and prints their sum
 * return: 0
 */
int main() {
    int num1, num2, sum;  // declare 3 integer variables

    printf("First Number: ");   // ask for first number
    scanf("%d", &num1);         // read the first number

    printf("Second Number: ");  // ask for second number
    scanf("%d", &num2);         // read the second number

    sum = num1 + num2;          // calculate the sum

    printf("Result: %d\n", sum);  // print the result
    return 0;                    // program ends successfully
}
