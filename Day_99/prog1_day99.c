/*
 * Day 99 | Question 149
 * Use malloc() to allocate Student structure memory dynamically and print the details.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <stdlib.h>

struct Student { char name[100]; int roll_no; float marks; };

int main(void) {
    struct Student *s = malloc(sizeof *s);
    if (!s) { perror("malloc"); return 1; }
    if (scanf("%99s %d %f", s->name, &s->roll_no, &s->marks) != 3) { free(s); return 0; }
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s->name, s->roll_no, s->marks);
    free(s);
    return 0;
}
