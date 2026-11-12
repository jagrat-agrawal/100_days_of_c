/*
 * Day 58 | Question 108
 * Print the product of all array elements except the element at the current index, without division.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 100000

int main(void) {
    int n, a[MAX]; long long answer[MAX];
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long prefix = 1;
    for (int i = 0; i < n; i++) { answer[i] = prefix; prefix *= a[i]; }
    long long suffix = 1;
    for (int i = n - 1; i >= 0; i--) { answer[i] *= suffix; suffix *= a[i]; }
    printf("["); for (int i = 0; i < n; i++) printf("%s%lld", i ? "," : "", answer[i]); printf("]\n");
    return 0;
}
