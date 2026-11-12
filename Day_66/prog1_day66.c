/*
 * Day 66 | Question 116
 * Find two distinct indices whose values add to target; print the indices or -1 -1.
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
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) if (a[i] + a[j] == target) { printf("%d %d\n", i, j); return 0; }
    printf("-1 -1\n");
    return 0;
}
