/*
 * Day 76 | Question 126
 * Ask for a filename, check whether it exists, and display its contents if it can be opened.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char filename[256], line[512];
    if (scanf("%255s", filename) != 1) return 0;
    FILE *fp = fopen(filename, "r");
    if (!fp) { printf("Error: File does not exist!\n"); return 0; }
    printf("File opened successfully.\n");
    while (fgets(line, sizeof line, fp)) fputs(line, stdout);
    fclose(fp);
    return 0;
}
