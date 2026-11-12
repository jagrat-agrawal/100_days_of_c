/*
 * Day 75 | Question 125
 * Open an existing file in append mode and append a new line without overwriting its contents.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256], line[1000];
    if (scanf("%255s", filename) != 1) return 0;
    int ch; while ((ch = getchar()) != '\n' && ch != EOF) { }
    if (!fgets(line, sizeof line, stdin)) return 0;
    FILE *fp = fopen(filename, "a");
    if (!fp) { perror(filename); return 1; }
    size_t n = strlen(line);
    fputs(line, fp);
    if (n == 0 || line[n - 1] != '\n') fputc('\n', fp);
    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
