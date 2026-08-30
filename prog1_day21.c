//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/


/*#include <stdio.h>
#include <math.h>
int main(){
    int n ;
    scanf("%d",&n);
    int i = n / 10, j, rev = 0, p, q;
    q=n%10;
    while( i != 0){
        j = i%10;
        rev = rev*10 + j;
        i = i/10;
    }
    p = rev%10;
    int a = rev/10, b , c = 0;
    while(a != 0){
        b = a%10;
        c = c*10 + b;
        a = a/10;
    }
    int clock=n , power = 1;
    while(clock>=10){
        power= 10*power;
        clock=clock/10;
    }
    int final= q*power + c*10 + p;
    printf("%d", final);
    return 0;
}*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, middle, power, result;

    scanf("%d", &n);

    // Get last digit
    last = n % 10;

    // Find the place value of first digit
    power = 1;
    int temp = n;

    while (temp >= 10) {
        power = power * 10;
        temp = temp / 10;
    }

    // Get first digit
    first = temp;

    // Get middle digits
    middle = (n % power) / 10;

    // Swap first and last digit
    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}