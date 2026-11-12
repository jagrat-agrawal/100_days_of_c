/*
 * Day 42 | Question 84
 * Convert a lowercase string to uppercase without using built-in functions.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = (char)(s[i] - 'a' + 'A');
    }
    printf("%s", s);
    return 0;
}
