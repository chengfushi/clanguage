/*测试ASCII码表*/
#include <stdio.h>
int main(void)
{
//   循环输出ASCII码
    for(int i=32;i<128;i++){
        printf("%c",i);
//        每16个字符换行
    if(i%16==15){
        printf("\n");
        }
    }
    return 0;
}
