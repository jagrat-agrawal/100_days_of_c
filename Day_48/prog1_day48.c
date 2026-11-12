/*
 * Day 48 | Question 95
 * Check if one string is a rotation of another.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char a[1000], b[1000], doubled[2000];
    if (!fgets(a, sizeof a, stdin) || !fgets(b, sizeof b, stdin)) return 0;
    a[strcspn(a, "\r\n")] = '\0'; b[strcspn(b, "\r\n")] = '\0';
    size_t n = strlen(a);
    if (n != strlen(b)) { puts("Not rotation"); return 0; }
    snprintf(doubled, sizeof doubled, "%s%s", a, a);
    puts(strstr(doubled, b) != NULL ? "Rotation" : "Not rotation");
    return 0;
}
