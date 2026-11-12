/*
 * Day 94 | Question 144
 * Write a function that accepts a Student structure as a parameter and prints its members.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

struct Student { char name[100]; int roll_no; float marks; };
void printStudent(struct Student s) { printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll_no, s.marks); }

int main(void) {
    struct Student s;
    if (scanf("%99s %d %f", s.name, &s.roll_no, &s.marks) != 3) return 0;
    printStudent(s);
    return 0;
}
