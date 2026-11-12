/*
 * Day 43 | Question 85
 * Reverse a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    size_t n = strcspn(s, "\r\n"); s[n] = '\0';
    for (size_t i = 0; i < n / 2; i++) {
        char t = s[i]; s[i] = s[n - 1 - i]; s[n - 1 - i] = t;
    }
    printf("%s\n", s);
    return 0;
}
