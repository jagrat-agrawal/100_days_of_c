#include <stdio.h>
int main(){
    int n, i, count = 0, rev = 0;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    int a = n;
    while (a != 0) {          // count how many bits n needs
        count++;
        a = a / 2;
    }
    for (i = count - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;   // extract bit at position i, MSB first
        rev = rev * 10 + bit;     // place it directly, no reversal needed
    }
    printf("%d", rev);
    return 0;
}