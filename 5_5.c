//ѡ������
#include <stdio.h>
void Rort(int sum[],int N)
{
    for (int i = 0; i < N; i++)
    {
        int main =sum[i];
        for (int j = i+1; j < N; ++j)
        {
            if(sum[i]>sum[j])
            {
                main = sum[j];
                sum[j] = sum[i];
                sum[i] = main;
            }
        }
    }
    //ѭ���������
    printf("������Ԫ���ǣ�");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",sum[i]);
    }
}
int main()
{
    //ȷ�������С
    int n = 0;
    printf("������Ҫ����Ԫ�ظ�����\n");
    scanf("%d",&n);
    //��������
    int sum[n];
    printf("������Ҫ�����Ԫ�أ�\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&sum[i]);
    }
    //������
    Rort(sum,n);
    return 0;
}