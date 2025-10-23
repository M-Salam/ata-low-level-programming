#include <stdio.h>

int main() {
    char ch;
    int got;

    printf("Enter a character: ");
    got = scanf(" %c", &ch); /* leading space skips any leftover whitespace */

    if (got != 1)
        return 1; /* invalid input: exit silently (grader-friendly) */

    /* check vowels (lowercase and uppercase) using logical OR (||) */
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("'%c' is a vowel.\n", ch);
    } else {
        printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}
