/*
 * Day 53 | Question 103
 * Find and print the leftmost pivot index where left and right sums are equal; otherwise print -1.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, a[MAX]; long long total = 0, left = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) { scanf("%d", &a[i]); total += a[i]; }
    for (int i = 0; i < n; i++) {
        total -= a[i];
        if (left == total) { printf("%d\n", i); return 0; }
        left += a[i];
    }
    printf("-1\n");
    return 0;
}
