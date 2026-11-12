/*
 * Day 97 | Question 147
 * Store employee data in a binary file using fwrite() and read it using fread().
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

struct Employee { int id; char name[100]; double salary; };

int main(void) {
    struct Employee e, readBack;
    if (scanf("%d %99s %lf", &e.id, e.name, &e.salary) != 3) return 0;
    FILE *fp = fopen("employee.dat", "wb");
    if (!fp) { perror("employee.dat"); return 1; }
    if (fwrite(&e, sizeof e, 1, fp) != 1) { fclose(fp); puts("Write failed"); return 1; }
    rewind(fp);
    if (fread(&readBack, sizeof readBack, 1, fp) != 1) { fclose(fp); puts("Read failed"); return 1; }
    fclose(fp);
    printf("Employee: %s | ID: %d | Salary: %.2f\n", readBack.name, readBack.id, readBack.salary);
    return 0;
}
