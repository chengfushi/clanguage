////�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
//#include <stdio.h>
//int main()
//{
//    //����һ������
//    int n;
//    scanf("%d",&n);
//    char arr[20];
//    int left = 0;
//    int right = n-1;
//    for (int i = 0;i <= n; i++)
//    {
//        //�Խ����ϵ�����
//        for (int j = 0; j < n; ++j)
//        {
//            if(j==left||j==right)
//            {
//                arr[j] = '*';
//            }
//            else
//            {
//                arr[j] = " ";
//            }
//        }
//         arr[n] = '\0';
//        printf("%s\n",arr);
//        left++;
//        right--;
//    }
//    return 0;
//}
//����������
//#include <stdio.h>
//int main()
//{
//    //���������γ���
//    int n = 0;
//    scanf("%d",&n);
//    //����һ����ά����
//    char arr[n][n];
//    //���ѭ��Ϊ��
//    for (int i = 0; i < n; ++i)
//    {
//        //�ڲ�ѭ��Ϊ��
//        for (int j = 0; j < n; ++j)
//        {
//            if(i==0||i==n-1||j==0||j==n-1)
//                arr[i][j] = '*';
//            else
//            {
//                arr[i][j] = ' ';
//            }
//        }
//    }
//    //ѭ����ӡ����
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < n; ++j)
//        {
//            printf("%c",arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////����ת��
//#include <stdio.h>
//int main()
//{
//    //���������к���
//    int i = 0;
//    int j = 0;
//    scanf("%d %d",&i,&j);
//    int sum[i][j];
//    //ѭ���洢��������
//    for (int k = 0; k < i; ++k)
//    {
//        for (int l = 0; l < j; ++l)
//        {
//            scanf("%d",&sum[k][l]);
//        }
//    }
//    //����ת��
//    for (int k = 0; k < i; ++k)
//    {
//        for (int l = 0; l < j; ++l)
//        {
//            printf("%d ",sum[l][k]);
//        }
//        printf("\n");
//    }
//    return 0;
////}
////�������
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int sum[n];
//    for (int i = 0; i < n; ++i)
//    {
//      scanf("%d",&sum[i]);
//    }
//    int left = 0;
//    int right = n-1;
//    while (left<=right)
//    {
//        int temp = sum[left];
//        sum[left] = sum[right];
//        sum[right] = temp;
//        left++;
//        right--;
//    }
//    for (int i = 0; i < n; ++i)
//    {
//        printf("%d ",sum[i]);
//    }
//    return 0;
//}
//��ƽ��ֵ
int ear(int sum[10])
{
    int and = 0;
    for (int i = 0; i < 10; ++i)
    {
        and +=sum[i];
    }
    int c =and/10;
    return c;
}
#include <stdio.h>
int main()
{
    //��������
    int sum[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d",&sum[i]);
    }
     int c =ear(sum);
    printf("%d",c);
    return 0;
}