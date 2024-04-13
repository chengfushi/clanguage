//C语言计算器小程序
#include <stdio.h>
int main()
{
    //定义要输入的数据
    double a,b,d;
    //定义符号
    char c;
    scanf("%lf %c %lf",&a,&c,&b);
    //switch语句用来进行运算
    switch (c)
    {
        case '+':
            d = a+b;
            break;
        case '-':
            d = a-b;
            break;
        case '*':
            d = a*b;
            break;
        case '/':
            d = a/b;
            break;
        case '%':
            d = a/b;
            break;
        default:
            printf("输入错误");
    }
    printf("%.2f %c %.2f = %.2f",a,c,b,d);
    return 0;
}