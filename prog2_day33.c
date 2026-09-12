#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int user[n+1];
    int i;
    for(i =0; i<n;i++){
        scanf("%d",&user[i]);
    }
    int a;
    scanf("%d",&a);
    i = 0;
    while( i < n){
    if(user[i]< a && a < user[i+1]){
        int j = n ;
        for(j; j > i+1; j-- ){
            user[j]= user[j-1];
        }
        user[i+1] = a;
        break;
    }
    i++;
    }
    for(i =0; i<=n;i++){
        printf("%d",user[i]);
    }
    return 0;
}