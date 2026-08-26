//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main(){
    int n, i=0;
    scanf("%d",&n);
    int j = n;
    while(j!=0){
        j=j/10;
        i++;
    }
    int k = n , l , sum = 0;
    while(k!=0){
        l=k%10;
        sum = sum + (int)pow(l,i);
        k=k/10;
    }
    if(sum == n){
        printf("%d is armstrong number",n);
    }
    else{
        printf("it is not armstrong number");
    }
    return 0;

}