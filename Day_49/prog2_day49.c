/*
 * Day 49 | Question 98
 * Print initials of a name with the surname displayed in full.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1000], words[50][100]; int count = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;
    char *token = strtok(s, " \t\r\n");
    while (token && count < 50) { snprintf(words[count], sizeof words[count], "%s", token); count++; token = strtok(NULL, " \t\r\n"); }
    if (count == 0) return 0;
    for (int i = 0; i < count - 1; i++) printf("%c.", words[i][0]);
    printf("%s\n", words[count - 1]);
    return 0;
}
