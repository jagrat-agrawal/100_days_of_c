/*
 * Day 83 | Question 133
 * Create an enum for months and print how many days each month has.
 *
 * Input: Month abbreviation (JAN-DEC), optionally followed by a year.
 * If a year is supplied, February is adjusted for leap years.
 */

#include <stdio.h>
#include <string.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(void) {
    char name[20];
    int year = 0;
    int fields = scanf("%19s %d", name, &year);
    if (fields < 1) return 0;

    enum Month month;
    if (!strcmp(name, "JAN")) month = JAN;
    else if (!strcmp(name, "FEB")) month = FEB;
    else if (!strcmp(name, "MAR")) month = MAR;
    else if (!strcmp(name, "APR")) month = APR;
    else if (!strcmp(name, "MAY")) month = MAY;
    else if (!strcmp(name, "JUN")) month = JUN;
    else if (!strcmp(name, "JUL")) month = JUL;
    else if (!strcmp(name, "AUG")) month = AUG;
    else if (!strcmp(name, "SEP")) month = SEP;
    else if (!strcmp(name, "OCT")) month = OCT;
    else if (!strcmp(name, "NOV")) month = NOV;
    else if (!strcmp(name, "DEC")) month = DEC;
    else {
        puts("Invalid month");
        return 0;
    }

    if (month == FEB) {
        if (fields == 1) {
            puts("28 or 29 days");
        } else {
            int leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
            printf("%d days\n", leap ? 29 : 28);
        }
    } else if (month == APR || month == JUN || month == SEP || month == NOV) {
        puts("30 days");
    } else {
        puts("31 days");
    }

    return 0;
}
