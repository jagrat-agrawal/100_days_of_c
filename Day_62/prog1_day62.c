/*
 * Day 62 | Question 112
 * Find the maximum sum of any contiguous subarray using Kadane's algorithm.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, x; long long current, best;
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) return 0;
    scanf("%d", &x); current = best = x;
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        current = current + x > x ? current + x : x;
        if (current > best) best = current;
    }
    printf("%lld\n", best);
    return 0;
}
