/*
 * Day 45 | Question 90
 * Toggle case of each character in a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = (char)(s[i] - 'a' + 'A');
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] = (char)(s[i] - 'A' + 'a');
    }
    printf("%s", s);
    return 0;
}
