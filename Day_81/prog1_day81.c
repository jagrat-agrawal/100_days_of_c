/*
 * Day 81 | Question 131
 * Create an enum for days Sunday to Saturday and print each day with its integer value.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main(void) {
    const char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    for (int i = SUNDAY; i <= SATURDAY; i++) printf("%s = %d\n", names[i], i);
    return 0;
}
