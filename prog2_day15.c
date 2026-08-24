//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;          // Get last digit
        rev = rev * 10 + rem;    // Add digit to reversed number
        num = num / 10;          // Remove last digit
    }

    printf("%d", rev);

    return 0;
}