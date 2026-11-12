/*
 * Day 70 | Question 120
 * Take a string and change it to title case (capitalize the first letter of each word).
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[2000]; int newWord = 1;
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (isspace(ch)) newWord = 1;
        else if (newWord) { s[i] = (char)toupper(ch); newWord = 0; }
        else s[i] = (char)tolower(ch);
    }
    printf("%s", s);
    return 0;
}
