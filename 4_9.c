////筛选N以内的素数
//#include <stdio.h>
//int main()
//{
//    //输入n
//    int N = 0;
//    scanf("%d",&N);
//    for (int i = 2; i < N; ++i)
//    {
//        int sum = 1;//假设sum是素数
//        for (int j = 2; j < i; ++j)
//        {
//            if(i%j==0)
//            {
//                sum = 0;//能被整除不是素数
//                    break;//跳出循环
//            }
//
//        }
//        if(sum)
//        {
//            printf("%d\n",i);
//
//        }
//    }
//    return 0;
//}
////选择排序
//#include <stdio.h>
//int main()
//{
//    int a[10];
//    for (int i = 0; i < 10; ++i) {
//        scanf("%d",&a[i]);
//    }
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < 9; ++j) {
//            if(a[j]>a[j+1])
//            {
//                int temp =a[j];
//                a[j] = a[j+1];
//                a[j+1] =temp;
//            }
//        }
//
//    }
//    for (int i = 0; i < 10; ++i) {
//        printf("%d\n",a[i]);
//    }
//    return 0;
//}
//矩阵对角线之和
//#include <stdio.h>
//int main()
//{
//    int a[3][3];//定义一个二维数组
//    int i,j,sum1 = 0,sum2 = 0;
//    //循环存储变量的值
//    for (int i = 0; i < 3; i++)
//    {
//            for (int j = 0; j < 3; j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    //计算对角线的和
//    for (int i = 0; i < 3; i++)
//    {
//            for (int j = 0; j < 3; j++)
//        {
//            //计算主对角线的和
//            if(i==j)
//            {
//                sum1 += a[i][j];
//            }
//            //计算副对角线的和
//            if(i+j==2)
//            {
//                sum2 += a[i][j];
//            }
//        }
//    }
//    printf("%d\n%d\n",sum1,sum2);
//    return 0;
//}
