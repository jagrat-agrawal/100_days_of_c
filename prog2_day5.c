//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main() {
    printf("enter secinds");
    int sec;
    scanf("%d", &sec);
    int hour = sec / 3600;
    int min = (sec % 3600) / 60;
    int seconds = sec % 60;
    printf("the time is %d:%d:%d", hour, min, seconds);
    return 0;
}