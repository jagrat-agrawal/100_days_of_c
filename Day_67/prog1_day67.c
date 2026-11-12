/*
 * Day 67 | Question 117
 * Merge two sorted arrays into one sorted array.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int m, n, a[MAX], b[MAX], c[2 * MAX];
    if (scanf("%d", &m) != 1 || m < 0 || m > MAX) return 0;
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) c[k++] = a[i] <= b[j] ? a[i++] : b[j++];
    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];
    for (int x = 0; x < k; x++) printf("%s%d", x ? " " : "", c[x]);
    printf("\n");
    return 0;
}
