//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("输入两个数和一个运算符（空格分割）");
    scanf("%d %d %c",&a,&b,&c);    
    switch(c)
    {
    case '+':
        printf("结果为：%d",a+b);
        break;
    case '-':
        printf("结果为：%d",a-b);
        break;
    case '*':
        printf("结果为：%d",a*b);   
        break;
    case '/':
        if(b != 0) 
            printf("结果为：%d",a/b);
        else
            printf("错误：除数不能为零"); 
        break;
    default:
        printf("错误：无效的运算符");    

}
    return 0;
}
