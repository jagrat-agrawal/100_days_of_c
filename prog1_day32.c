//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int i, k, z;
    scanf("%d", &i);
    int user[i];
    for(k = 0; k < i; k++) {
        scanf("%d", &user[k]);
    }
    int a, c;
    scanf("%d", &a);
    int user2[a];
    for(c = 0; c < a; c++) {
        scanf("%d", &user2[c]);
    }

    int b = 0, j[i + a], l = 0;
    while(l < i) {
        j[b] = user[l];
        b++;
        l++;
    }
    l = 0;
    while(l < a) {
        j[b] = user2[l];
        b++;
        l++;
    }
    for(z = 0; z < i + a; z++) {
        printf("%d ", j[z]);
    }
    return 0;
}