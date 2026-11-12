/*
 * Day 43 | Question 86
 * Check if a string is a palindrome.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    size_t n = strcspn(s, "\r\n");
    int palindrome = 1;
    for (size_t i = 0; i < n / 2; i++) {
        if (tolower((unsigned char)s[i]) != tolower((unsigned char)s[n - 1 - i])) { palindrome = 0; break; }
    }
    printf("%s\n", palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}
