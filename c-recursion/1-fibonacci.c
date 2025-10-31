#include <stdio.h>

/* Function prototype */
int fibonacci(int n);

int main(void)
{
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }

    if (n < 0) {
        printf("Fibonacci is not defined for negative integers.\n");
        return 1;
    }

    int result = fibonacci(n);
    printf("Fibonacci(%d) is: %d\n", n, result);
    return 0;
}

/* Recursive fibonacci:
 * Base cases: n == 0 -> 0, n == 1 -> 1
 * Recursive step: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
 */
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
