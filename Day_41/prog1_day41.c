/*
 * Day 41 | Question 81
 * Count characters in a string without using built-in length functions.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char s[1000]; int length = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;
    while (s[length] != '\0' && s[length] != '\n') length++;
    printf("%d\n", length);
    return 0;
}
