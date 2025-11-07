//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>

int main() {
    int matrix[3][3];
    int transpose[3][3];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d", transpose[i][0]); 
        for (j = 1; j < 3; j++) {
            printf(" %d", transpose[i][j]); 
        }
        printf("\n");
    }
    return 0;
}
