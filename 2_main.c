//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int score;
    printf("输入成绩：");
    scanf("%d",&score);//获取用户输入的成绩
    if(score >= 90)
        printf("等级为:A");
    else if(score >= 80)
        printf("等级为:B");
    else if(score >= 70)
        printf("等级为:C");
    else if(score >= 60)
        printf("等级为:D");
    else
        printf("等级为:E");
    return 0;
}
