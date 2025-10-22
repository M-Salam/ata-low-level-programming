#include <stdio.h>

int main() {
    int num;
    int result;

    printf("Enter an integer: ");
    result = scanf("%d", &num);

    // Check if input was a valid integer
    if (result != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1; // non-zero exit code (shows error)
    }

    if (num > 0)
        printf("%d is a positive number.\n", num);
    else if (num < 0)
        printf("%d is a negative number.\n", num);
    else
        printf("%d is zero.\n", num);

    return 0;
}
