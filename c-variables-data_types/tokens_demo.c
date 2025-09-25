#include <stdio.h>

/**
 * main - the main function
 * description: Demonstrates tokens in C by declaring variables and printing them
 * return: 0
 */
int main() {
    int number = 25;     // int = keyword, number = identifier, = = operator, 25 = literal, ; = punctuation
    float value = 15.7;  // float = keyword, value = identifier, = = operator, 15.7 = literal, ; = punctuation
    char letter = 'A';   // char = keyword, letter = identifier, = = operator, 'A' = literal, ; = punctuation

    printf("Integer: %d\n", number);
    printf("Float: %f\n", value);
    printf("Char: %c\n", letter);

    return 0;
}
