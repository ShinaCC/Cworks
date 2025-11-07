//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
    printf("请输入3×3矩阵（每行3个整数，空格分隔）：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n输出结果：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); 
        }
        printf("\n"); 
    }
    return 0;
}
