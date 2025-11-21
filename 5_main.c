//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>

// 自定义函数：将数组元素后移一位，首位补0，末位丢弃
void shiftArray(int *ptr_arr, int len) {
    // 从最后一个元素开始向前遍历，将前一个位置的值赋给当前位置
    int *p = ptr_arr + len - 1;  // 指向最后一个元素
    while (p > ptr_arr) {        // 遍历到第二个元素为止
        *p = *(p - 1);           // 将前一个元素的值赋给当前元素
        p--;                     // 指针向前移动
    }
    *ptr_arr = 0;                // 第一个位置补0
}

int main() {
    // 定义长度为5的整型数组
    int arr[5];
    
    // 从键盘输入数组元素

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    // 调用自定义函数处理数组
    shiftArray(arr, 5);
    
    // 输出处理后的数组

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
