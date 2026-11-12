/*
 * Day 61 | Question 111
 * Print the first negative integer in each window of size k; print 0 when a window has no negative value.
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
        int firstNegative = 0;
        for (int j = i; j < i + k; j++) if (a[j] < 0) { firstNegative = a[j]; break; }
        printf("%s%d", i ? " " : "", firstNegative);
    }
    printf("\n");
    return 0;
}
