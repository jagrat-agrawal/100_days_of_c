/*
 * Day 71 | Question 121
 * Create info.txt, read a user's name and age, and write them using fprintf().
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    char name[100]; int age;
    if (scanf("%99s %d", name, &age) != 2) return 0;
    FILE *fp = fopen("info.txt", "w");
    if (!fp) { perror("info.txt"); return 1; }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
