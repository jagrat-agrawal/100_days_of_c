/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345 */

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 1 , j;
    while(i<=n){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
        i++;
    }
    return 0;
}
