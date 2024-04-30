
//int main()
//{
//    unsigned long pulArray[] = {6,7,8,9,10};
//    unsigned long *pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) += 3;
//    printf("%d,%d\n",*pulPtr, *(pulPtr + 3));
//    return 0;
//}
//int main()
//{
//    int i = 10;
//    int *p;
//    p = &i;
//    printf("%d\n",i);
//    printf("%d\n",*p);
//    *p = 20;
//    printf("%d\n",i);
//    printf("%d\n",*p);
//    return 0;
//}
//#include <stdio.h>
//#include <stdio.h>
//
//void mistry(int *x, int *y)
//{
//    *x = 20;
//    *y = 10;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    mistry(&a, &b); // Pass addresses of a and b
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}
//#define N  10
////通过形参指针来更改实参的值
//void max_min(int arr[],int n,int *max,int *min)
//{
//    //初始化最大值
//    *max = *min =arr[0];
//    for (int j = 0; j < n; ++j)
//    {
//        if(*max<arr[j])
//        {
//            *max =arr[j];
//        }
//        if(*min>arr[j])
//        {
//            *min =arr[j];
//        }
//    }
//}
//int main()
//{
//    //定义初始化数组
//    int arr[N];
//    int big = 0;
//    int small = 0;
//     //输入数据
//    for(int i = 0; i < N; ++i)
//    {
//      scanf("%d",&arr[i]);
//    }
//    max_min(arr,N,&big,&small);
//    printf("max:%d\n",big);
//    printf("min:%d\n",small);
//    return 0;
//}
//#include <stdio.h>
////通过指针来返回数组中的值
//int* margin(int arr[],int N)
//{
//    return &arr[N/2];
//}
//int main()
//{
//   int n = 5;
//   int arr[5]={1,2,3,4,5};
//    int *y=margin(arr,n);
//            printf("%d\n",*y);
//    return 0;
//}
//int main()
//{
//    int a=010,b=0x10,c=10;
//
//    printf("%d %d %d",a,b,c);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    for (int i = 1; i <= 9; i++)
//    {
//        for (int j = 1; j <=i; ++j)
//        {
//            printf("%d\n%d\n",i,j);
//        }
//    }
//    return 0;
//}
#include <stdio.h>
int main()
{
    while(1)
    {
        printf("草拟吗我要放假\n");
    }
}

