////�׳����
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
//    //��������
//    int n = 0;
//    scanf("%d",&n);
//    //�ܺ�
//    long long sum = 0;
//    for (int i = 1;i<=n;i++)
//    {
//        sum += roust(i);
//    }
//    printf("%lld",sum);
//    return 0;
//}
/*//�������
#include <stdio.h>
double fall(double x ,int y);
double fall2(double x ,int y);
int main()
{
    double M = 0;//����ľ���
    int N = 0;//����Ĵ���
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
////��������
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);//ȷ�������С
//    int sum[n];
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d",&sum[i]);//ѭ���洢����
//    }
//    int x = 0;
//    scanf("%d",&x);//����Ҫ���ҵ�����
//    int y = 0;//�ҵ����ֵĸ���
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
//ɸѡ��������
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);//�������
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
