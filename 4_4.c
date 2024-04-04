//
// Created by 30362 on 2024/4/4.
//
//求n以内的素数
#include<stdio.h>
int main()
{
    //定义数字n
    int n;
    printf("请输入该数字");
    scanf("%d",&n);
    //循环历经1到n
    for (int i = 2; i <= n; ++i) {
        //循环历经1到i
        for (int j = 2; j < i; ++j) {
            if(i%j==0){
                break;//如果i能被j整除，则跳出循环
            }if(j==i-1){
                printf("%d\n",i);//如果j等于i-1，则输出i
            }
        }
    }
    return 0;
}