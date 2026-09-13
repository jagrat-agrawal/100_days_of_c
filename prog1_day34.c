//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

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
    int a;
    scanf("%d",&a);
    i = 0;
    int j = n ;
    for(j; j > p; j-- ){
        user[j]= user[j-1];
    }
    user[p] = a;
    for(i =0; i<=n;i++){
        printf("%d ",user[i]);
    }
    return 0;
}