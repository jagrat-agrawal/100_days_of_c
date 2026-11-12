/*
 * Day 50 | Question 100
 * Print all sub-strings of a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = (int)strcspn(s, "\r\n"), first = 1;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            if (!first) printf(",");
            for (int k = start; k <= end; k++) putchar(s[k]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
