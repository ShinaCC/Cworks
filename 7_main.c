//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>

// 冒泡排序函数：使用指针操作实现排序
void bubbleSort(int *arr, int n) {
    // 外层循环控制排序轮数
    for (int i = 0; i < n - 1; i++) {
        // 内层循环进行相邻元素比较，每轮减少i次比较（末尾i个元素已有序）
        for (int j = 0; j < n - 1 - i; j++) {
            // 使用指针访问相邻元素：arr[j] 等价于 *(arr + j)
            if (*(arr + j) > *(arr + j + 1)) {
                // 交换相邻元素
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    // 定义存储10个整数的数组
    int numbers[10];
    
    // 提示用户输入10个整数

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // 调用冒泡排序函数，传入数组首地址和长度
    bubbleSort(numbers, 10);
    
    // 打印排序后的结果

    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
