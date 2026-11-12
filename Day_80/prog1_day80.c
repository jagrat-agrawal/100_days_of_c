/*
 * Day 80 | Question 130
 * Write multiple student records to students.txt using fprintf(), then read and display them using fscanf().
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    int n, roll, marks; char name[100];
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) return 0;
    FILE *fp = fopen("students.txt", "w");
    if (!fp) { perror("students.txt"); return 1; }
    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %d", name, &roll, &marks) != 3) { fclose(fp); return 1; }
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (!fp) { perror("students.txt"); return 1; }
    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    fclose(fp);
    return 0;
}
