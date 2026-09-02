/* Q49: Write a program to print the following pattern:
5
45
345
2345
12345 */

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = n, j;
    while(i != 0){
        for(j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
        i--;
    }
    return 0;
}