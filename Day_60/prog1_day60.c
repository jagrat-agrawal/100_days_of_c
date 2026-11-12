/*
 * Day 60 | Question 110
 * Find the maximum element in every contiguous subarray (window) of size k.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, k, a[MAX];
    if (scanf("%d %d", &n, &k) != 2 || n < 0 || n > MAX || k <= 0 || k > n) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i <= n - k; i++) {
        int maximum = a[i];
        for (int j = i + 1; j < i + k; j++) if (a[j] > maximum) maximum = a[j];
        printf("%s%d", i ? " " : "", maximum);
    }
    printf("\n");
    return 0;
}
