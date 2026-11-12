/*
 * Day 48 | Question 96
 * Reverse each word in a sentence without changing the word order.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[2000];
    if (!fgets(s, sizeof s, stdin)) return 0;
    int n = (int)strcspn(s, "\r\n");
    for (int i = 0; i < n;) {
        if (s[i] == ' ') { i++; continue; }
        int start = i;
        while (i < n && s[i] != ' ') i++;
        int end = i - 1;
        while (start < end) { char t = s[start]; s[start] = s[end]; s[end] = t; start++; end--; }
    }
    s[n] = '\0'; printf("%s\n", s);
    return 0;
}
