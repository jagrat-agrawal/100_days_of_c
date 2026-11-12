/*
 * Day 65 | Question 115
 * Determine whether two lowercase strings are anagrams.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char a[1000], b[1000]; int f[26] = {0};
    if (!fgets(a, sizeof a, stdin) || !fgets(b, sizeof b, stdin)) return 0;
    for (int i = 0; a[i] && a[i] != '\n'; i++) if (a[i] >= 'a' && a[i] <= 'z') f[a[i] - 'a']++;
    for (int i = 0; b[i] && b[i] != '\n'; i++) if (b[i] >= 'a' && b[i] <= 'z') f[b[i] - 'a']--;
    int ok = 1; for (int i = 0; i < 26; i++) if (f[i]) ok = 0;
    puts(ok ? "Anagram" : "Not Anagram");
    return 0;
}
