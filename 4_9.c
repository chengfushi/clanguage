////ɸѡN���ڵ�����
//#include <stdio.h>
//int main()
//{
//    //����n
//    int N = 0;
//    scanf("%d",&N);
//    for (int i = 2; i < N; ++i)
//    {
//        int sum = 1;//����sum������
//        for (int j = 2; j < i; ++j)
//        {
//            if(i%j==0)
//            {
//                sum = 0;//�ܱ�������������
//                    break;//����ѭ��
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
////ѡ������
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
//����Խ���֮��
//#include <stdio.h>
//int main()
//{
//    int a[3][3];//����һ����ά����
//    int i,j,sum1 = 0,sum2 = 0;
//    //ѭ���洢������ֵ
//    for (int i = 0; i < 3; i++)
//    {
//            for (int j = 0; j < 3; j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//    //����Խ��ߵĺ�
//    for (int i = 0; i < 3; i++)
//    {
//            for (int j = 0; j < 3; j++)
//        {
//            //�������Խ��ߵĺ�
//            if(i==j)
//            {
//                sum1 += a[i][j];
//            }
//            //���㸱�Խ��ߵĺ�
//            if(i+j==2)
//            {
//                sum2 += a[i][j];
//            }
//        }
//    }
//    printf("%d\n%d\n",sum1,sum2);
//    return 0;
//}
