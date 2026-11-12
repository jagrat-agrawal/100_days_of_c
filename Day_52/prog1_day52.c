/*
 * Day 52 | Question 102
 * In a sorted array, find the 0-based index of the first element greater than or equal to x; otherwise print -1.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, a[MAX], x;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    int lo = 0, hi = n;
    while (lo < hi) { int mid = lo + (hi - lo) / 2; if (a[mid] < x) lo = mid + 1; else hi = mid; }
    printf("%d\n", lo == n ? -1 : lo);
    return 0;
}
