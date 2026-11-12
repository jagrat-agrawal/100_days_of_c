/*
 * Day 57 | Question 107
 * For each array element, print the nearest greater element to its left, or -1; use nested loops, not a stack.
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
        int previous = -1;
        for (int j = i - 1; j >= 0; j--) if (a[j] > a[i]) { previous = a[j]; break; }
        printf("%s%d", i ? " " : "", previous);
    }
    printf("\n");
    return 0;
}
