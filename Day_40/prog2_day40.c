/*
 * Day 40 | Question 80
 * Multiply two matrices.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100

int main(void) {
    int r1, c1, r2, c2, a[MAX][MAX], b[MAX][MAX];
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0 || r1 > MAX || c1 > MAX) return 0;
    for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0 || r2 > MAX || c2 > MAX) return 0;
    for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    if (c1 != r2) { printf("Multiplication not possible\n"); return 0; }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int sum = 0;
            for (int k = 0; k < c1; k++) sum += a[i][k] * b[k][j];
            printf("%s%d", j ? " " : "", sum);
        }
        printf("\n");
    }
    return 0;
}
