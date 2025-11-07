//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>

int main() {
    int nums[10];
    int i, j, temp;
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        if (i == 0) {
            printf("%d", nums[i]);
        } else {
            printf(" %d", nums[i]);
        }
    }
    printf("\n");

    return 0;
}
