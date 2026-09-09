//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>
int main() {
    int n, k;
    scanf("%d", &n);
    int user[n];
    for (k = 0; k < n; k++) {
        scanf("%d", &user[k]);
    }
    int max = user[0];
    int min = user[0];
    for (k = 1; k < n; k++) {
        if (user[k] > max) {
            max = user[k];
        }

        if (user[k] < min) {
            min = user[k];
        }
    }
    printf("Max=%d, Min=%d", max, min);
    return 0;
}