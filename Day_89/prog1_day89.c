/*
 * Day 89 | Question 139
 * Show that enum constants are stored as integer values by printing them.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}
