//���ֲ��Һ���
#include <stdio.h>
#include "bin_search.h"
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    //��������
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int left = 0;
    int right = n-1;
    //������Ҫ���ҵ���
    int key = 0;
    printf("��������Ҫ���ҵ���\n");
    scanf("%d",&key);
    int roust = bin_search(arr,0,n-1,key);
    if(roust==1)
    {
        printf("�ҵ���,λ����\n");
    }
    else
    {
        printf("�Ҳ���\n");
    }
    return 0;
}