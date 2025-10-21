//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int s;
    printf("输入成绩：");
    scanf("%d",&s);
    if(s >= 90)
        printf("等级为:A");
    else if(s>= 80)
        printf("等级为:B");
    else if(s>= 70)
        printf("等级为:C");
    else if(s >= 60)
        printf("等级为:D");
    else
        printf("等级为:E");
    return 0;
}
