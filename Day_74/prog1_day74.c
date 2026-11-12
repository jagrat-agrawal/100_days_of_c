/*
 * Day 74 | Question 124
 * Copy all content from a source file to a destination file using fgetc() and fputc().
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char source[256], destination[256]; int ch;
    if (scanf("%255s %255s", source, destination) != 2) return 0;
    FILE *in = fopen(source, "r");
    if (!in) { perror(source); return 1; }
    FILE *out = fopen(destination, "w");
    if (!out) { perror(destination); fclose(in); return 1; }
    while ((ch = fgetc(in)) != EOF) fputc(ch, out);
    fclose(in); fclose(out);
    printf("File copied successfully to %s\n", destination);
    return 0;
}
