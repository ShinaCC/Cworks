//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int n;
    scanf ("%d", &n);
     if (n <= 1 || n >= 50) {
        printf("密钥不安全，请重新输入\n");
    }
    else{
    int i = 1;
    int a = 2;
    while (a < n)
    {
        if(n % a == 0){
        i = 0;
        break;
        }
        a++;
    }

    if(i)  {
        printf("密钥安全，密码设置成功\n");
    }
    else {
        printf("密钥不安全，请重新输入\n");
    }
    }
    return 0;
}
