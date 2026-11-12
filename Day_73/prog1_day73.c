/*
 * Day 73 | Question 123
 * Read sample.txt and count total characters, words, and lines.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp = fopen("sample.txt", "r");
    if (!fp) { perror("sample.txt"); return 1; }
    int ch, inWord = 0, characters = 0, words = 0, lines = 0, any = 0;
    while ((ch = fgetc(fp)) != EOF) {
        any = 1; characters++;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) inWord = 0;
        else if (!inWord) { words++; inWord = 1; }
    }
    if (any) {
        /* Count a final unterminated line as a line too. */
        fseek(fp, -1L, SEEK_END);
        if (fgetc(fp) != '\n') lines++;
    }
    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
