//冒泡排序
#include <stdio.h>
//冒泡排序的思路就是比较数组内部相邻元素的大小，将相邻的元素作比较，大的放右边，小的放左边
void Sork(int sum[],int N)
{
    //定义一个中间量交换元素
    int temp = 0;
    //进行元素交换
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if(sum[j]>sum[j+1])
            {
                temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;
            }
        }
    }
    //循环输出数组
    for (int i = 0; i < N; ++i)
    {
        printf("%d ",sum[i]);
    }
}
int main()
{
    int n = 0;
    //请输入要比较元素的个数
    scanf("%d",&n);
    int sum[n];
    //循环输入元素
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&sum[i]);
    }
    //定义排序函数
    Sork(sum,n);
    return 0;
}