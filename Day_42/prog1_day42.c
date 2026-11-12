/*
 * Day 42 | Question 83
 * Count vowels and consonants in a string.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[1000]; int vowels = 0, consonants = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (isalpha(ch)) {
            ch = (unsigned char)tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels++;
            else consonants++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
