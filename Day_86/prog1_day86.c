/*
 * Day 86 | Question 136
 * Use enum menu choices ADD, SUBTRACT, MULTIPLY and perform the selected operation using switch.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main(void) {
    char op[20]; double a, b; enum Operation choice;
    if (scanf("%19s %lf %lf", op, &a, &b) != 3) return 0;
    if (!strcmp(op, "ADD")) choice = ADD; else if (!strcmp(op, "SUBTRACT")) choice = SUBTRACT;
    else if (!strcmp(op, "MULTIPLY")) choice = MULTIPLY; else { puts("Invalid operation"); return 0; }
    switch (choice) { case ADD: printf("%.2f\n", a + b); break; case SUBTRACT: printf("%.2f\n", a - b); break; case MULTIPLY: printf("%.2f\n", a * b); break; }
    return 0;
}
