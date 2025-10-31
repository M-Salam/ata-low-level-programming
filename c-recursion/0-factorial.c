#include <stdio.h>

/* Function prototype */
long long factorial(int n);

/* Main program: prompt, read, compute, print */
int main(void)
{
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }

    if (n < 0) {
        printf("Factorial is not defined for negative integers.\n");
        return 1;
    }

    long long result = factorial(n);
    printf("The factorial of %d is: %lld\n", n, result);
    return 0;
}

/* Recursive factorial function */
long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1LL;  // Base case
    else
        return n * factorial(n - 1);  // Recursive step
}
