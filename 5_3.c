//��������
#include <stdio.h>
void Sort(int sum[],int N)
{
    //��������
    for (int i = 1; i < N; i++)
    {
        int temp = sum[i];
        int j = i - 1;

        // ���ϴ��Ԫ������ƶ�
        while (j >= 0 && sum[j] > temp)
        {
            sum[j + 1] = sum[j];
            j--;
        }

        // ���� temp ����ȷ��λ��
        sum[j + 1] = temp;
    }
    //���
    for (int i = 0; i < N; ++i)
    {
        printf("%d ",sum[i]);    
    }
}
int main()
{
    //����Ҫ�ŵ�����
    int n = 0;
    printf("������Ҫ��Ԫ�صĸ�����\n");
    scanf("%d",&n);
    //��������
    int sum[n];
    //ѭ����������
    printf("������Ҫ�ŵ�Ԫ��\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&sum[i]);
    }
    //���ú���
    Sort(sum,n);
    return 0;
}