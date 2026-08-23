#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i , a=1;
    for(i=1;i<=n;i++){
        a = a*(2*i);
    }
    printf("product of n even no. is %d",a);
    return 0;
}