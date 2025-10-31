//202510305216
//3531783828@qq.com
//张嘉鑫
#include <stdio.h>
int main()
{
    int hundreds, tens, units;
    int blank = 0;
    int num = 100;
    while(num<=999)
    {
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;
    if (hundreds * hundreds * hundreds + 
            tens * tens * tens + 
            units * units * units == num)   {
                if(blank > 0){
                    printf(" ");
                }
            
            printf("%d", num);
            blank++;
            }
        num++;
    }
}
