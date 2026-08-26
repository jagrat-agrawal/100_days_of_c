//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
    int n , i = 2 , j ,q = 1;
    scanf("%d",&n);
    while(i<n){
        j=n%i;
        i++;
        if(j==0){
            q=0;
            printf("it is not prime number");
            break;
        }
    }
    if(q){
            printf("it is prime number");
        }
        return 0;
}