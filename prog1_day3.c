//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main(){
    float c;
	printf("enter temprature in celsius:");
	scanf("%f",&c);
    float f = (9.0/5.0)*c + 32.0;
    printf("the temprature in farehnit equals to %f",f);
    return 0;
}