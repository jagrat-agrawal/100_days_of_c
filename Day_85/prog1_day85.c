/*
 * Day 85 | Question 135
 * Assign explicit enum values starting from 10 and print them.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

enum Number { A = 10, B, C };

int main(void) {
    printf("A=%d\nB=%d\nC=%d\n", A, B, C);
    return 0;
}
