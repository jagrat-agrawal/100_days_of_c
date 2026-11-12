/*
 * Day 50 | Question 99
 * Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>

int main(void) {
    int day, month, year;
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if (scanf("%d/%d/%d", &day, &month, &year) != 3 || month < 1 || month > 12) return 0;
    printf("%02d-%s-%04d\n", day, months[month - 1], year);
    return 0;
}
