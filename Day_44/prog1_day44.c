/*
 * Day 44 | Question 87
 * Count spaces, digits, and special characters in a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000]; int spaces = 0, digits = 0, special = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (ch == ' ') spaces++;
        else if (isdigit(ch)) digits++;
        else if (!isalnum(ch)) special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
