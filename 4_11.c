//#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        //b==1,a==1
//        //b==4 a==2
//        //b==7 a==3
//        //b==13 a==4
//        //b==16 a==5
//        //b==19 a==6
//        //b==22 a==7
//        if (b >= 20) break;
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            //b==4,a==1
//            //b==7 a==2
//            //b==10 a==3
//            continue;
//        }
//        b = b-5;
//    }
//    printf("%d\n", a);
//    return 0;
//}
//求十个整数最大值
//#include <stdio.h>
//int main()
//{
//    //定义数组存储十个整数
//    int a[10];
//    for (int i = 0; i < 10; ++i)
//    {
//        scanf("%d",&a[i]);
//    }
//    //将max定为数组第一个数
//    int max = a[0];
//    //循环经历一遍数组
//    for (int i = 0; i < 10; i++)
//    {
//        //数组比较大小
//        for (int j = 0; j < 10; j++)
//        {
//            if(a[j]>a[0])
//            {
//                max = a[j];
//            }
//        }
//    }
//    printf("%d",max);
//    return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include <stdlib.h>
//int main()
//{
//    int i = 0;//分子
//    double mun = 0;
//    for (int i = 1; i < 100; i++)
//    {
//        if (i%2==1)
//        {
//            mun += 1.0/i;
//        }
//        else
//        {
//            mun -= 1.0/i;
//        }
//
//    }
//    printf("%f",mun);
//    return 0;
//}
//计算1-100出现多少个9
//#include <stdio.h>
//int main()
//{
//    for (int i = 0; i < 100; i++)
//    {
//        if(i%10==9)
//        {
//            printf("%d\n",i);
//        }
//    }
//    return 0;
//}
//打印1000到2000润年个数
//#include<stdio.h>
//int main()
//{
//    for(int i =1000;i <= 2000;i++)
//    {
//        if((i%4==0 && i%100!=0)||(i%400==0))
//        {
//            printf("%d\n",i);
//        }
//    }
//    return 1;
//}
////求最大公约数
//#include <stdio.h>
//int main()
//{
//    //输入两个数
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    for (int i = 0;i < a;i++)
//    {
//        if()
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//int arr[] = {1,2,(3,4),5};
//printf("%d\n", sizeof(arr));
//return 0;
//}
//#include <stdio.h>
//#include <string.h> // 包含头文件 <string.h>
//
//int main() {
//    char str[] = "hello bit";
//    printf("%zu %zu\n", sizeof(str), strlen(str)); // 使用 %zu 格式说明符
//    return 0;
//}
////判断三角形
//#include <stdio.h>
//int main()
//{
//    //建立一个数组
//    int a[3];
//    //循环存储数组
//    for (int i = 0; i < 3; ++i)
//    {
//        scanf("%d",&a[i]);
//    }
//    if((a[0]+a[1]>a[2])&&(a[0]-a[1]<a[2]))
//        printf("可以构成三角形");
//    return 0;
//}
#include <stdio.h>
int main()
{
    for (int i = 1; i < 9; ++i)
    {
        for (int j = 1; j < 9; ++j)
        {
            int k;
            k=i*j;
            printf("%d*%d=%d\t",i,j,k);
        }
        printf("\n");
    }
    return 0;
}