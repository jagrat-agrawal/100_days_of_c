/*
 * Day 54 | Question 104
 * Find pivot integer x where 1+...+x equals x+...+n; print -1 if none.
 *
 * Input: A positive integer n.
 */

#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 1 || n == LLONG_MAX) return 0;

    /* The equality simplifies to x*x = n*(n+1)/2. */
    long long a = n;
    long long b = n + 1;
    if (a % 2 == 0) a /= 2;
    else b /= 2;

    if (b != 0 && a > LLONG_MAX / b) {
        printf("-1\n");
        return 0;
    }
    long long total = a * b;

    /* Search only 1..n; avoid mid*mid to prevent multiplication overflow. */
    long long low = 1;
    long long high = n;
    long long answer = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long quotient = total / mid;

        if (mid == quotient && total % mid == 0) {
            answer = mid;
            break;
        }
        if (mid < quotient) low = mid + 1;
        else high = mid - 1;
    }

    printf("%lld\n", answer);
    return 0;
}
