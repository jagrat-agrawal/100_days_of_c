//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);

    int p = a + b;
    printf("sum = %d\n", p);

    int c, d;

    printf("Enter next 2 numbers\n");
    scanf("%d %d", &c, &d);

    int q = c + d;
    printf("sum = %d\n", q);

    return 0;
}