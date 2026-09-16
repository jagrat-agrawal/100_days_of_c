//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum[rows];
    for(int z = 0; z < rows ; z++){
        sum[z] = 0;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) { 
         sum[i] = sum[i] + matrix[i][j];
        }
    }
    for(int z = 0; z < rows ; z++){
        printf("%d ",sum[z]);
    }
    return 0;
}