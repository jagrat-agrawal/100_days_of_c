//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a, b = 1 , c = 0 , i = n;
    while(i != 0){
        a = i%b;
        if(a == 0){
            c = c + b;
        }
        i = i/b;
        b++;
    }
    if(c == n){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }
    return 0;

}