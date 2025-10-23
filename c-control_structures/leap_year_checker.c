#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1)
        return 1; /* invalid input: exit with non-zero status */

    /* leap year rule:
       - divisible by 4 and not by 100  -> leap
       - OR divisible by 400             -> leap
    */
    if ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;

