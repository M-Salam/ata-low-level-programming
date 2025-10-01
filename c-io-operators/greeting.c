#include <stdio.h>   // include standard input/output library

/**
 * main - the main function
 * description: Asks the user for their name and greets them
 * return: 0
 */
int main() {
    char name[50];   // declare a character array (string) to store the name

    printf("Enter your name: ");    // ask the user for input
    scanf("%49s", name);           // read the name (max 49 characters, avoid overflow)

    printf("Hello, %s!\n", name);  // print Hello, <name>!
    return 0;
}
