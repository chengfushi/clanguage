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
//��ʮ���������ֵ
//#include <stdio.h>
//int main()
//{
//    //��������洢ʮ������
//    int a[10];
//    for (int i = 0; i < 10; ++i)
//    {
//        scanf("%d",&a[i]);
//    }
//    //��max��Ϊ�����һ����
//    int max = a[0];
//    //ѭ������һ������
//    for (int i = 0; i < 10; i++)
//    {
//        //����Ƚϴ�С
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
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include <stdlib.h>
//int main()
//{
//    int i = 0;//����
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
//����1-100���ֶ��ٸ�9
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
//��ӡ1000��2000�������
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
////�����Լ��
//#include <stdio.h>
//int main()
//{
//    //����������
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
//#include <string.h> // ����ͷ�ļ� <string.h>
//
//int main() {
//    char str[] = "hello bit";
//    printf("%zu %zu\n", sizeof(str), strlen(str)); // ʹ�� %zu ��ʽ˵����
//    return 0;
//}
////�ж�������
//#include <stdio.h>
//int main()
//{
//    //����һ������
//    int a[3];
//    //ѭ���洢����
//    for (int i = 0; i < 3; ++i)
//    {
//        scanf("%d",&a[i]);
//    }
//    if((a[0]+a[1]>a[2])&&(a[0]-a[1]<a[2]))
//        printf("���Թ���������");
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