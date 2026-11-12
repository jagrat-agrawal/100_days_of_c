/*
 * Day 45 | Question 89
 * Count frequency of a given character in a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000], target; int count = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;
    s[strcspn(s, "\r\n")] = '\0';
    if (scanf(" %c", &target) != 1) return 0;
    for (int i = 0; s[i] != '\0'; i++) if (s[i] == target) count++;
    printf("%d\n", count);
    return 0;
}
