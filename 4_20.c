#include <stdio.h>
#include <math.h>
int main()
{
    //定义年增长率、年数、与现在的倍数
    double dpi = 0,ratio = 0;
    int n = 0;
    //输入年利率为%5;
    printf("请输入年利率:\n");
    scanf("%lf",&ratio);
    //输入年数
    printf("请输入年利率:\n");
    scanf("%d",n);
    //计算与现在相比的倍数
    dpi = pow((1+ratio),n);
    printf("%d年后与现在相比倍数为：%lf",n,dpi);
    return 0;
}