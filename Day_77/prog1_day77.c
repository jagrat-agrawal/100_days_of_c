/*
 * Day 77 | Question 127
 * Read input.txt, convert lowercase letters to uppercase, and write the result to output.txt.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int ch;
    FILE *in = fopen("input.txt", "r");
    if (!in) { perror("input.txt"); return 1; }
    FILE *out = fopen("output.txt", "w");
    if (!out) { perror("output.txt"); fclose(in); return 1; }
    while ((ch = fgetc(in)) != EOF) fputc(toupper((unsigned char)ch), out);
    fclose(in); fclose(out);
    printf("Converted text written to output.txt\n");
    return 0;
}
