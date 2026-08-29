//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prod = 1,i = n,j;
    while(i!=0){
        j = i%10;
        prod = prod*j;
        i = i/100;
    }
    printf(" %d",prod);
    return 0;

}