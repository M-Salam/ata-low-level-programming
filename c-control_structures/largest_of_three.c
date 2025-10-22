#include <stdio.h>

int main() {
    int a, b, c;
    int got;

    printf("Enter three integers: ");
    got = scanf("%d %d %d", &a, &b, &c);

    /* validate input */
    if (got != 3) {
        printf("Invalid input! Please enter three integers.\n");
        return 1; /* non-zero exit code signals error */
    }

    /* find largest */
    int largest = a;         /* start assuming a is largest */
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    printf("%d is the largest number.\n", largest);
    return 0;
}
