/*
 * Day 95 | Question 145
 * Return a structure containing the top student's details from a function.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#define MAX 1000
struct Student { char name[100]; int roll_no; float marks; };

struct Student topStudent(struct Student s[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) if (s[i].marks > s[top].marks) top = i;
    return s[top];
}

int main(void) {
    int n; struct Student s[MAX];
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) return 0;
    for (int i = 0; i < n; i++) if (scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks) != 3) return 0;
    struct Student best = topStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %.2f\n", best.name, best.roll_no, best.marks);
    return 0;
}
