//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(){
    int n , rev = 0, rem;
    scanf("%d",&n);
    int i = n;
    while(i!=0){
        rem=i%10;
        rev= rev*10+ rem;
        i=i/10;
    }
    if(rev == n){
        printf(" it is palindrome");
    }
    else{
        printf("it is not palindrome");
    }
    return 0;
}