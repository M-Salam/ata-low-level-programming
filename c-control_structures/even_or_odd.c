#include <stdio.h>

int main() {
    int num;
    int got;

    printf("Enter an integer: ");
    got = scanf("%d", &num);

    /* handle invalid (non-integer) input */
    if (got != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1; /* non-zero exit code signals error */
    }

    /* 0 is even; negative numbers work the same with % */
    if (num % 2 == 0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    return 0;
}
