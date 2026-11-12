/*
 * Day 46 | Question 92
 * Find the first repeating lowercase alphabet in a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char s[1000]; int seen[26] = {0};
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int idx = s[i] - 'a';
            if (seen[idx]) { printf("%c\n", s[i]); return 0; }
            seen[idx] = 1;
        }
    }
    printf("-1\n");
    return 0;
}
