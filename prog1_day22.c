//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int clock = n, digit = 0;
    while(clock != 0){
        digit++;
        clock = clock/10;
    }
    int a = 1,b, c =n , d = 1, e = 0;
    while( a <= digit){
        d = 1;
        b = (c % (int)pow(10,a)) / (int)pow(10,(a-1));
        while(b != 0){
            d = d*b;
            b--;
        }
        e = e + d;
        a++;
    }
    if(e == n){
        printf("strong number");
    }
    else{
        printf("not strong number");
    }
}