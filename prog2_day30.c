//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main(){
    int i , j , k;
    scanf("%d",&i);
    int user[i];
    for(k = 0 ; k < i ; k++){
        scanf("%d",&user[k]);
    }
    int possitive = 0 ,negative =0 ,zero = 0;
    for(k = 0 ; k < i ; k++){
        if(user[k] == 0){
            zero++;
        }
        else if(user[k] > 0){
            possitive++;
        }
        else{
            negative++;
        }
    }
    printf("the no. of zero , possitive and negative no. is %d , %d and %d", zero ,possitive, negative);

}