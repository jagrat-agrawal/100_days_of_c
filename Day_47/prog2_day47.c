/*
 * Day 47 | Question 94
 * Find the longest word in a sentence.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[2000], best[1000] = "";
    if (!fgets(s, sizeof s, stdin)) return 0;
    int i = 0, bestLen = 0;
    while (s[i] != '\0') {
        while (s[i] != '\0' && isspace((unsigned char)s[i])) i++;
        int start = i;
        while (s[i] != '\0' && !isspace((unsigned char)s[i])) i++;
        int len = i - start;
        if (len > bestLen) { memcpy(best, s + start, (size_t)len); best[len] = '\0'; bestLen = len; }
    }
    printf("%s\n", best);
    return 0;
}
