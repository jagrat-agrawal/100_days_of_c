/*
 * Day 40 | Question 79
 * Perform diagonal traversal of a matrix.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100

int main(void) {
    int rows, cols, a[MAX][MAX];
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) return 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) scanf("%d", &a[i][j]);

    int first = 1;
    for (int d = 0; d < rows + cols - 1; d++) {
        int values[MAX], count = 0;
        int rStart = d - (cols - 1);
        if (rStart < 0) rStart = 0;
        int rEnd = d < rows - 1 ? d : rows - 1;
        for (int r = rStart; r <= rEnd; r++) {
            int c = d - r;
            values[count++] = a[r][c];
        }
        /* Alternate direction on successive diagonals. */
        if (d % 2 == 0) {
            for (int k = count - 1; k >= 0; k--) {
                printf("%s%d", first ? "" : " ", values[k]); first = 0;
            }
        } else {
            for (int k = 0; k < count; k++) {
                printf("%s%d", first ? "" : " ", values[k]); first = 0;
            }
        }
    }
    printf("\n");
    return 0;
}
