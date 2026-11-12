/*
 * Day 90 | Question 140
 * Define a struct containing an enum Gender and print the person's gender.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };
struct Person { enum Gender gender; };

int main(void) {
    char input[20]; struct Person p;
    if (scanf("%19s", input) != 1) return 0;
    if (!strcmp(input, "MALE")) p.gender = MALE; else if (!strcmp(input, "FEMALE")) p.gender = FEMALE;
    else if (!strcmp(input, "OTHER")) p.gender = OTHER; else { puts("Unknown gender"); return 0; }
    if (p.gender == MALE) puts("Male"); else if (p.gender == FEMALE) puts("Female"); else puts("Other");
    return 0;
}
