#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1)
        return 1; /* invalid input: exit silently */

    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
