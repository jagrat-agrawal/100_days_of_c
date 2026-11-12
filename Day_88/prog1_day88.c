/*
 * Day 88 | Question 138
 * Print enum names and integer values using a loop.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int color = RED; color <= GREEN; color++) printf("%s=%d\n", names[color], color);
    return 0;
}
