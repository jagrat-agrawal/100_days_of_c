/*
 * Day 96 | Question 146
 * Create an Employee structure with a nested Date structure for joining date and print the details.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

struct Date { int day, month, year; };
struct Employee { char name[100]; int id; struct Date joiningDate; };

int main(void) {
    struct Employee e;
    if (scanf("%99s %d %d %d %d", e.name, &e.id, &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year) != 5) return 0;
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);
    return 0;
}
