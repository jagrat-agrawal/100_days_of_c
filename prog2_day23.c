/* Q46: Write a program to print the following pattern:
*****
*****
*****
*****
***** */

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 1;
    while( i <= n){
        printf("***** \n");
        i++;
    }
    return 0;
}