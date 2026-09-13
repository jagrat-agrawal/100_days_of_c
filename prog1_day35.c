//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int user[n];
    int i;
    for(i =0; i<n;i++){
        scanf("%d",&user[i]);
    }
    int max = user[0];
    int ans = user[1] , a;
    for(i =0; i<n;i++){
        if(user[i] > max){
            max = user[i];
        }
    }
    for(i =0; i<n;i++){
      if(user[i]<max){
         if(user[i] > ans){
         ans = user[i];
        }
        }
    }
    printf("%d",ans);

}