/*
 * Day 91 | Question 141
 * Define a Student structure with name, roll_no, and marks; read and print one student's data.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

struct Student { char name[100]; int roll_no; float marks; };

int main(void) {
    struct Student s;
    if (scanf("%99s %d %f", s.name, &s.roll_no, &s.marks) != 3) return 0;
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}
