//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
#include <stdlib.h> // 包含 malloc 和 free 函数的头文件

int main() {
    // 使用 malloc 动态分配能存储5个整数的内存空间
    int *arr = (int *)malloc(5 * sizeof(int));
    
    // 提示用户输入5个整数

    // 通过指针操作将输入值存入动态内存
    int *p = arr; // 定义指针 p 指向动态内存的起始位置
    for (int i = 0; i < 5; i++) {
        scanf("%d", p); // 直接将值存入指针指向的地址
        p++; // 指针移动到下一个整数位置
    }
    
    // 遍历打印所有元素

    p = arr; // 重置指针到起始位置
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p); // 解引用指针获取值并打印
        p++;
    }
    printf("\n");
    
    // 释放动态分配的内存，避免内存泄漏
    free(arr);
    arr = NULL; // 将指针置空，防止悬空指针
    
    return 0;
}
