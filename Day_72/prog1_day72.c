/*
 * Day 72 | Question 122
 * Open info.txt and print all its lines using fgets() until EOF.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char line[256];
    FILE *fp = fopen("info.txt", "r");
    if (!fp) { perror("info.txt"); return 1; }
    while (fgets(line, sizeof line, fp)) fputs(line, stdout);
    fclose(fp);
    return 0;
}
