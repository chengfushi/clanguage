////阶乘求和
//#include <stdio.h>
//int roust(int n)
//{
//    int reuslt = 1;
//    for (int i = 1;i<=n;i++)
//    {
//        reuslt *= i;
//    }
//    return reuslt;
//}
//int main()
//{
//    //输入数字
//    int n = 0;
//    scanf("%d",&n);
//    //总和
//    long long sum = 0;
//    for (int i = 1;i<=n;i++)
//    {
//        sum += roust(i);
//    }
//    printf("%lld",sum);
//    return 0;
//}
/*//反弹落地
#include <stdio.h>
double fall(double x ,int y);
double fall2(double x ,int y);
int main()
{
    double M = 0;//下落的距离
    int N = 0;//下落的次数
    scanf("%lf %d",&M,&N);
    double sum = fall(M ,N);
    double he = fall2(M,N);
    printf("%.2lf\n",sum);
    printf("%.2lf\n",he);
    return 0;

}
double fall(double x ,int y)
{
    for (int i = 1; i <= y; ++i)
    {
        x = x/2;
    }
    return x;
}
double fall2(double x ,int y) {
    double z = 0;
    for (int i = 1; i <= y; ++i) {
        z += x;
        x = x / 2;
    }
    return z;
}*/
/*1000 1000
 * 500 500
 * 250 250
 * 125 125
 * 62.5 62.5
 * 31.25 31.25*/
////查找数字
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);//确认数组大小
//    int sum[n];
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d",&sum[i]);//循环存储数组
//    }
//    int x = 0;
//    scanf("%d",&x);//输入要查找的数字
//    int y = 0;//找到数字的个数
//    for (int i = 0; i < n; ++i)
//    {
//        if(x==sum[i])
//        {
//            y++;
//        }
//    }
//    printf("%d",y);
//    return 0;
//}
//筛选法求素数
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);//最大数字
//    int arr[n];
//    for (int i = 0; i < n; ++i)
//    {
//        arr[i]=i+2;
//    }
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 2; j <= arr[i]/2; ++j)
//        {
//            if(arr[i]%j==0)
//            {
//                arr[i] = 0;
//                break;
//            }
//        }
//    }
//    for (int i = 0; i < n; ++i)
//    {
//        if(arr[i]!=0)
//        {
//            printf("%d ",arr[i]);
//        }
//    }
//    return 0;
//}
