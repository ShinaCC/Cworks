//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int *p = arr; 
    for (int i = 0; i < 5; i++) {
        *p *= 2;   
        p++;      
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
