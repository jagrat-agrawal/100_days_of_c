/*
 * Day 79 | Question 129
 * Read integers from numbers.txt and print their sum and average.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) { perror("numbers.txt"); return 1; }
    int x, count = 0; long long sum = 0;
    while (fscanf(fp, "%d", &x) == 1) { sum += x; count++; }
    fclose(fp);
    if (count == 0) { printf("No numbers found\n"); return 0; }
    printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
    return 0;
}
