/*
 * Day 64 | Question 114
 * Find the length of the longest substring without repeating characters.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[5000]; int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = (int)strcspn(s, "\r\n"), start = 0, best = 0;
    for (int i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (last[ch] >= start) start = last[ch] + 1;
        last[ch] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}
