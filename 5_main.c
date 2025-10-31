//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int arr[5];
    int i, sum = 0;
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    arr[4] = sum;
    for(i = 0; i < 5; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
return 0;
}
