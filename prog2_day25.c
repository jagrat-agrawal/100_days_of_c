/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = n, j , k;
    while(i != 0){
        for(k=n;k>i;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        i--;
    }
    return 0;
}