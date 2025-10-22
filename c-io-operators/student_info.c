#include <stdio.h>
#include <string.h>

/**
 * main - the main function
 * description: Asks the user for name, age and grade, then prints them in one sentence
 * return: 0
 */
int main() {
    char name[100];   // buffer to store the user's name (up to 99 chars + null)
    int age;          // integer to store the user's age
    float grade;      // float to store the user's grade

    /* Read the name using fgets so the name can contain spaces */
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        // if input fails (EOF or error), exit with non-zero
        return 1;
    }
    /* fgets keeps the newline at the end, remove it if present */
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    /* Read age (integer) */
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input for age.\n");
        return 1;
    }

    /* Read grade (float) */
    printf("Enter your grade: ");
    if (scanf("%f", &grade) != 1) {
        printf("Invalid input for grade.\n");
        return 1;
    }

    /* Print the sentence exactly as required, grade with two decimals */
    printf("Hello %s! Your grade is %.2f and you are %d years old.\n", name, grade, age);

    return 0;
}
