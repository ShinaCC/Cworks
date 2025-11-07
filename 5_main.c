//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int arithmetic_series_sum(int a1, int an, int step) {
    int n = (an - a1) / step + 1;
    return (a1 + an) * n / 2;
}
int main() {
    int result = arithmetic_series_sum(1, 100, 1);
    printf("%d\n", result);
    return 0;
}
