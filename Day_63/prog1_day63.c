/*
 * Day 63 | Question 113
 * Find the kth smallest element in an integer array.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, k, a[MAX];
    if (scanf("%d %d", &n, &k) != 2 || n <= 0 || n > MAX || k < 1 || k > n) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++) for (int j = 0; j < n - i - 1; j++) if (a[j] > a[j + 1]) { int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t; }
    printf("%d\n", a[k - 1]);
    return 0;
}
