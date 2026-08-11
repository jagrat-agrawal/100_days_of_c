#include <stdio.h>
int main(){
    float r;
    float area, circumference;
    float pi = 3.14;
	printf("enter value of r");
    scanf("%f", &r);
    area = pi * r * r;
    circumference = 2 * pi * r;
    printf("Area=%.2f, Circumference=%.2f", area, circumference);
    return 0;
}