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
    int col ,  row;
    scanf("%d%d",&row,&col);
    int user[row][col] , z = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &user[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(matrix[i][j] != user[i][j]){
                z=1;
                break;
            }
        }
        if(z){
            printf("false");
        }
        else{
            printf("true");
        }
        return 0;
}
}