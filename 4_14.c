////字符串递归居中
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char a1[]="hello world";
//    char a2[]="###########";
//    int left = 0;
//    int right = strlen (a1) -1;
//    while (left<=right)
//    {
//        //睡眠1000毫秒
//        Sleep(1000);
//        //输出a2字符数组
//        printf("%s\n",a2);
//        //让a2左端变为a1
//        a2[left] = a1[left];
//        a2[right] = a1[right];
//        left++;
//        right--;
//        printf("%s\n",a2);
//    }
//    return 0;
//}
//二分查找
//1 2 3 4 5 6 7 8 9 10
//如果我要找7
//1和10平均数是5
//5<7,那么就将选择2和10再求平均数
//#include <stdio.h>
//int main()
//{
//    //定义一个顺序数组
//    int arr[] = {1,2,3,4,5,6,7,8,9};
//    //输入想要查找的数字
//    int key = 0;
//    printf("请输入想要查找的数字");
//    scanf("%d",&key);
//    //计算数组长度
//    int left = 0;
//    int right = sizeof (arr)/sizeof (arr[0])-1;
//    //计录中间数组下标
//    int mind = 0;
//    mind = left + (right-left)/2;
//    //假设没找到
//    int find = 0;
//    while(left<=right)
//    {
//        mind = left + (right-left)/2;
//        if(arr[mind]>key)
//        {
//            //中间值大了，就选择右边的数字
//            right = mind-1;
//        }
//        else if(arr[mind]<key)
//        {
//            //中间值小了，那就选左边的数字
//            left = mind+1;
//        }
//        else
//        {
//            find=1;
//            break;
//        }
//    }
//    if(find==1)
//    {
//        printf("找到了，下标是%d\n",mind);
//    }
//    else
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}