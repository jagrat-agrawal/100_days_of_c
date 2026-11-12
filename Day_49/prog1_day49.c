/*
 * Day 49 | Question 97
 * Print the initials of a name.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000]; int atWordStart = 1;
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace((unsigned char)s[i])) atWordStart = 1;
        else { if (atWordStart) printf("%c.", s[i]); atWordStart = 0; }
    }
    printf("\n");
    return 0;
}
