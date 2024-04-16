//二分查找函数
#include <stdio.h>
#include "bin_search.h"
int main()
{
    int n = 0;
    scanf("%d",&n);
    int arr[n];
    //输入数组
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int left = 0;
    int right = n-1;
    //输入需要查找的数
    int key = 0;
    printf("请输入需要查找的数\n");
    scanf("%d",&key);
    int roust = bin_search(arr,0,n-1,key);
    if(roust==1)
    {
        printf("找到了,位置是\n");
    }
    else
    {
        printf("找不到\n");
    }
    return 0;
}