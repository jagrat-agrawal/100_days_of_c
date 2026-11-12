/*
 * Day 51 | Question 101
 * In a sorted array with duplicates, print the first and last occurrence indices of target; print -1 -1 if absent.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, a[MAX], target;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &target);
    int left = -1, right = -1, lo = 0, hi = n - 1;
    while (lo <= hi) { int mid = lo + (hi - lo) / 2; if (a[mid] >= target) hi = mid - 1; else lo = mid + 1; }
    if (lo < n && a[lo] == target) {
        left = lo; lo = 0; hi = n - 1;
        while (lo <= hi) { int mid = lo + (hi - lo) / 2; if (a[mid] <= target) lo = mid + 1; else hi = mid - 1; }
        right = hi;
    }
    printf("%d %d\n", left, right);
    return 0;
}
