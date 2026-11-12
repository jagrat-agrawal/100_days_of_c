/*
 * Day 59 | Question 109
 * Find the maximum sum of all contiguous subarrays of size k.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, k, a[MAX];
    if (scanf("%d %d", &n, &k) != 2 || n < 0 || n > MAX || k <= 0 || k > n) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long sum = 0; for (int i = 0; i < k; i++) sum += a[i];
    long long best = sum;
    for (int i = k; i < n; i++) { sum += a[i] - a[i - k]; if (sum > best) best = sum; }
    printf("%lld\n", best);
    return 0;
}
