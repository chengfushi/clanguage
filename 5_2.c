//���ֲ���
//���ֲ��ҵ�˼·�ǣ���ȡ�м����������ҵ������м����Աȣ�������ˣ���������ټ�һλ
#include <stdio.h>
void Find(int sum[],int x,int y,int z)
{

     while(x <= y)
     {
         int center = x+(y -x)/2;
         if(sum[center] > z)
         {
             y = center - 1;
         }
         else if(sum[center] < z)
         {
             x = center+1;
         }
         else
         {
             printf("�ҵ��ˣ��ǵ�%d��Ԫ��\n",center+1);
             break;
         }
     }
     if(x > y)
     {
         printf("�Ҳ���\n");
     }
}
int main()
{
    int n = 0;
    //������Ҫ���ҵ�Ԫ�ظ���
    printf("������Ҫ���ҵ�Ԫ�ظ���\n");
    scanf("%d",&n);
    int sum[n];
    //ѭ����������
    printf("������Ҫ���ҵ�����\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&sum[i]);
    }
    //��ʼ���������ߵ�����
    int left = 0;
    int right = n-1;
    //����Ҫ���ҵ�����
    int mid = 0;
    printf("������Ҫ���ҵ�����\n");
    scanf("%d",&mid);
    Find(sum,left,right,mid);
    return 0;
}