/*
 * Day 68 | Question 118
 * Find the missing number from the integers 0 through n, where the input array has n elements.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, x; long long expected = 0, actual = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    expected = (long long)n * (n + 1) / 2;
    for (int i = 0; i < n; i++) { scanf("%d", &x); actual += x; }
    printf("%lld\n", expected - actual);
    return 0;
}
