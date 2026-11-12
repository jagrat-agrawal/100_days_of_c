/*
 * Day 46 | Question 91
 * Remove all vowels from a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000]; int j = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = (char)tolower((unsigned char)s[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') s[j++] = s[i];
    }
    s[j] = '\0'; printf("%s", s);
    return 0;
}
