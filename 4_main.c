//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("输入三个整数");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("满足条件");
    }
    else
    {
        printf("未满足条件");
    }
return 0;
}
