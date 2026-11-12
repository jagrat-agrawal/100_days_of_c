/*
 * Day 47 | Question 93
 * Check if two strings are anagrams of each other.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char a[1000], b[1000]; int freq[256] = {0};
    if (!fgets(a, sizeof a, stdin) || !fgets(b, sizeof b, stdin)) return 0;
    for (int i = 0; a[i] != '\0'; i++) if (!isspace((unsigned char)a[i])) freq[(unsigned char)tolower((unsigned char)a[i])]++;
    for (int i = 0; b[i] != '\0'; i++) if (!isspace((unsigned char)b[i])) freq[(unsigned char)tolower((unsigned char)b[i])]--;
    int ok = 1; for (int i = 0; i < 256; i++) if (freq[i] != 0) ok = 0;
    printf("%s\n", ok ? "Anagrams" : "Not anagrams");
    return 0;
}
