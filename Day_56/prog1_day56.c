/*
 * Day 56 | Question 106
 * For each array element, print the nearest greater element to its right, or -1; use nested loops, not a stack.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, a[MAX];
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) if (a[j] > a[i]) { next = a[j]; break; }
        printf("%s%d", i ? " " : "", next);
    }
    printf("\n");
    return 0;
}
