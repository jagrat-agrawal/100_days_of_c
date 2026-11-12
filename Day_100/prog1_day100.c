/*
 * Day 100 | Question 150
 * Use a pointer to struct to modify and display data using the -> operator.
 *
 * Input: Student name, roll number, and marks (for example: John 106 91).
 */

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student student = {"", 0, 0.0f};
    struct Student *ptr = &student;

    if (scanf("%99s %d %f", ptr->name, &ptr->roll_no, &ptr->marks) != 3) {
        fprintf(stderr, "Invalid student data.\n");
        return 1;
    }

    /* Input is stored through ptr-> members; the pointer is then used to display them. */

    printf("Modified Data: Name: %s | Roll: %d | Marks: %g\n",
           ptr->name, ptr->roll_no, (double)ptr->marks);
    return 0;
}
