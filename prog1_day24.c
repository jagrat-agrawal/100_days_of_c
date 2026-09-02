/* Q47: Write a program to print the following pattern:
*
**
***
****
***** */

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 1 , j;
    while(i<=n){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}
