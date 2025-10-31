//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i=0; i<5; i++){
        int num;
        do {
            scanf("%d",&num);
        }while( num % 2 !=0);
        arr[i] = num;
    }
    for(i = 0; i < 5; i++){
        if(i > 0){
            printf(" ");
        }
        printf("%d",arr[i]);
    }
    return 0;
}
