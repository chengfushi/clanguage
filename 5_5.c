//选择排序
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
    //循环输出数组
    printf("排序后的元素是：");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",sum[i]);
    }
}
int main()
{
    //确定数组大小
    int n = 0;
    printf("请输入要排序元素个数：\n");
    scanf("%d",&n);
    //输入数组
    int sum[n];
    printf("请输入要排序的元素：\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&sum[i]);
    }
    //排序函数
    Rort(sum,n);
    return 0;
}