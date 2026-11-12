/*
 * Day 41 | Question 82
 * Print each character of a string on a new line.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) printf("%c\n", s[i]);
    return 0;
}
