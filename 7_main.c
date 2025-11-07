//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>

void reverseArray(int arr[], int length) {
    for (int i = 0; i < length / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr, 5);
    
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}
