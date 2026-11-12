/*
 * Day 69 | Question 119
 * Find the one repeated element in an integer array in one pass using a hash table.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100000
#define TABLE_SIZE 262147

static int used[TABLE_SIZE];
static int keys[TABLE_SIZE];
static unsigned int hash_int(int x) { return ((unsigned int)x * 2654435761u) % TABLE_SIZE; }

int main(void) {
    int n, x;
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_N) return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        unsigned int pos = hash_int(x);
        while (used[pos] && keys[pos] != x) pos = (pos + 1) % TABLE_SIZE;
        if (used[pos]) { printf("%d\n", x); return 0; }
        used[pos] = 1; keys[pos] = x;
    }
    printf("-1\n");
    return 0;
}
