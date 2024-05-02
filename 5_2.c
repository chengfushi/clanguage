//二分查找
//二分查找的思路是，先取中间量，将查找的量与中间量对比，如果大了，就在左边再加一位
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
             printf("找到了，是第%d个元素\n",center+1);
             break;
         }
     }
     if(x > y)
     {
         printf("找不到\n");
     }
}
int main()
{
    int n = 0;
    //请输入要查找的元素个数
    printf("请输入要查找的元素个数\n");
    scanf("%d",&n);
    int sum[n];
    //循环输入数组
    printf("请输入要查找的数组\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&sum[i]);
    }
    //初始化左右两边的数字
    int left = 0;
    int right = n-1;
    //输入要查找的数字
    int mid = 0;
    printf("请输入要查找的数字\n");
    scanf("%d",&mid);
    Find(sum,left,right,mid);
    return 0;
}