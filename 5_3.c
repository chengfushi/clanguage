//插入排序
#include <stdio.h>
void Sort(int sum[],int N)
{
    //插入排序
    for (int i = 1; i < N; i++)
    {
        int temp = sum[i];
        int j = i - 1;

        // 将较大的元素向后移动
        while (j >= 0 && sum[j] > temp)
        {
            sum[j + 1] = sum[j];
            j--;
        }

        // 插入 temp 到正确的位置
        sum[j + 1] = temp;
    }
    //输出
    for (int i = 0; i < N; ++i)
    {
        printf("%d ",sum[i]);    
    }
}
int main()
{
    //输入要排的数字
    int n = 0;
    printf("请输入要排元素的个数：\n");
    scanf("%d",&n);
    //定义数组
    int sum[n];
    //循环输入数组
    printf("请输入要排的元素\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&sum[i]);
    }
    //调用函数
    Sort(sum,n);
    return 0;
}