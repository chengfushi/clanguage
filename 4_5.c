//
// Created by 30362 on 2024/4/5.
//
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    float f = 0.0f;
//    int r = scanf("%d %d %f", &a, &b, &f);
//    printf("a=%d b=%d f=%f\n", a, b, f);
//    printf("r=%d\n",r);
//    return 0;
//}
//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
//#include <stdio.h>
//int main()
//{
//    int n=0;
//    for (int i = 1; i < 5; ++i)//��λ�ϵ�����ѭ��һ��
//    {
//        for (int j = 1; j < 5; ++j)//ʮλ�ϵ�����ѭ��һ��
//        {
//            for (int k = 1; k < 5; ++k)//��λ�ϵ�����ѭ��һ��
//            {
//                if(i!=j&&j!=k&&i!=k)//ȷ����ͬ
//                {
//                    printf("%d%d%d\n",i,j,k);
//                    n++;
//                }
//            }
//        }
//    }
//    printf("%d\n",n);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a = 176, b = 219;
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", a, a, b, a, a);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//
//    return 0;
//}
//��������
//#include <stdio.h>
//int main()
//{
//    int a = 1,b = 1;
//    int r;//����������Ŀ
//    int day;
//    printf("������������\n");
//    scanf("%d",&day);
//    for (int i = 3; i <= day; ++i) //ѭ��������3��n��
//    {
//        r = a + b;
//        printf("��%d������Ϊ��%d\n",i,r);
//        a = b;//��b��ֵ��a
//        b = r;
//    }
//    return 0;
//}