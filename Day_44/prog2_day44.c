/*
 * Day 44 | Question 88
 * Replace spaces with hyphens in a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) if (s[i] == ' ') s[i] = '-';
    printf("%s", s);
    return 0;
}
