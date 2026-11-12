/*
 * Day 55 | Question 105
 * Print the majority element that appears more than floor(n/2) times; print -1 if none.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, a[MAX], candidate = 0, count = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (count == 0) candidate = a[i], count = 1;
        else if (a[i] == candidate) count++;
        else count--;
    }
    count = 0; for (int i = 0; i < n; i++) if (a[i] == candidate) count++;
    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}
