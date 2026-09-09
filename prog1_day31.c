//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main(){
    int i , j , k;
    scanf("%d",&i);
    int user[i];
    for(k = 0 ; k < i ; k++){
        scanf("%d",&user[k]);
    }
    int sum=0;
    for(k = 0 ; k < i ; k++){
        sum = sum + user[k];
    }
    float a;
    a = sum/i;
    printf("%.2f", a);
}