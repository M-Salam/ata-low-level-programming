#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    unsigned long long t;
    int count = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1)
        return 1; /* invalid input: exit with non-zero status */

    /* work with absolute value so negatives count correctly */
    if (n < 0)
        t = (unsigned long long)(-n);
    else
        t = (unsigned long long)n;

    /* do-while: executes at least once (handles n = 0 correctly) */
    do {
        count++;
        t /= 10;
    } while (t > 0);

    printf("Number of digits: %d\n", count);
    return 0;
}
