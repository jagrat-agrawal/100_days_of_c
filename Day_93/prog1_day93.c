/*
 * Day 93 | Question 143
 * Find and print the student with the highest marks.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 1000
struct Student { char name[100]; int roll_no; float marks; };

int main(void) {
    int n, top = 0; struct Student s[MAX];
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) { if (scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks) != 3) return 0; if (s[i].marks > s[top].marks || i == 0) top = i; }
    printf("Topper: %s (Marks: %.2f)\n", s[top].name, s[top].marks);
    return 0;
}
