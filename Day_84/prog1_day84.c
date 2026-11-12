/*
 * Day 84 | Question 134
 * Define enum values SUCCESS, FAILURE, and TIMEOUT and print the corresponding message.
 *
 * Input format: see README.md in the package root.
 */

#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    char input[20]; enum Status status;
    if (scanf("%19s", input) != 1) return 0;
    if (!strcmp(input, "SUCCESS")) status = SUCCESS;
    else if (!strcmp(input, "FAILURE")) status = FAILURE;
    else if (!strcmp(input, "TIMEOUT")) status = TIMEOUT;
    else { puts("Unknown status"); return 0; }
    switch (status) { case SUCCESS: puts("Operation successful"); break; case FAILURE: puts("Operation failed"); break; case TIMEOUT: puts("Operation timed out"); break; }
    return 0;
}
