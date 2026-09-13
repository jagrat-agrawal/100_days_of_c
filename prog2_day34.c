//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int user[n+1];
    int i;
    for(i =0; i<n;i++){
        scanf("%d",&user[i]);
    }
    int p;
    scanf("%d",&p);
    i = 0;
    int j = p ;
    for(j; j < n; j++ ){
        user[j]= user[j+1];
    }
    for(i =0; i<n-1;i++){
        printf("%d ",user[i]);
    }
    return 0;
}