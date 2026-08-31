//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float i = n - 1 , sum = 1 , a =1;
    while(a <= i){
        sum = sum + (3 + 2*a)/(4 + 2*a);
        a++;
    }
    printf("approximate sum : %.1f",sum);
}