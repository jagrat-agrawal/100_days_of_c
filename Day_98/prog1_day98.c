/*
 * Day 98 | Question 148
 * Take two Student structures as input and check whether all their members are identical.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

struct Student { char name[100]; int roll_no; float marks; };

int main(void) {
    struct Student a, b;
    if (scanf("%99s %d %f", a.name, &a.roll_no, &a.marks) != 3) return 0;
    if (scanf("%99s %d %f", b.name, &b.roll_no, &b.marks) != 3) return 0;
    int same = strcmp(a.name, b.name) == 0 && a.roll_no == b.roll_no && a.marks == b.marks;
    puts(same ? "Same" : "Different");
    return 0;
}
