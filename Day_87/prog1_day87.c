/*
 * Day 87 | Question 137
 * Create an enum for user roles ADMIN, USER, GUEST and display a message based on the role.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char input[20]; enum Role role;
    if (scanf("%19s", input) != 1) return 0;
    if (!strcmp(input, "ADMIN")) role = ADMIN; else if (!strcmp(input, "USER")) role = USER;
    else if (!strcmp(input, "GUEST")) role = GUEST; else { puts("Invalid role"); return 0; }
    switch (role) { case ADMIN: puts("Welcome Admin!"); break; case USER: puts("Welcome User!"); break; case GUEST: puts("Welcome Guest!"); break; }
    return 0;
}
