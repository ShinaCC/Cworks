//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int *p = &a;
    *p = *p + 10;
    printf("%d,%d\n", a, *p);
    return 0;
}

