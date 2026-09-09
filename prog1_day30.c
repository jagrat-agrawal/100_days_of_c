//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main(){
    int i , j , k;
    scanf("%d",&i);
    int user[i];
    for(k = 0 ; k < i ; k++){
        scanf("%d",&user[k]);
    }
    int even = 0 ,odd =0;
    for(k = 0 ; k < i ; k++){
        if(user[k] == 0){
        }
        else if(user[k]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("the no. of even and odd no. is %d & %d",even,odd);

}