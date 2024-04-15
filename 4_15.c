////多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//#include <stdio.h>
//int main()
//{
//    //定义一个数组
//    int n;
//    scanf("%d",&n);
//    char arr[20];
//    int left = 0;
//    int right = n-1;
//    for (int i = 0;i <= n; i++)
//    {
//        //对角线上的数组
//        for (int j = 0; j < n; ++j)
//        {
//            if(j==left||j==right)
//            {
//                arr[j] = '*';
//            }
//            else
//            {
//                arr[j] = " ";
//            }
//        }
//         arr[n] = '\0';
//        printf("%s\n",arr);
//        left++;
//        right--;
//    }
//    return 0;
//}
//空心正方形
//#include <stdio.h>
//int main()
//{
//    //定义正方形长宽
//    int n = 0;
//    scanf("%d",&n);
//    //定义一个二维数组
//    char arr[n][n];
//    //外层循环为行
//    for (int i = 0; i < n; ++i)
//    {
//        //内层循环为列
//        for (int j = 0; j < n; ++j)
//        {
//            if(i==0||i==n-1||j==0||j==n-1)
//                arr[i][j] = '*';
//            else
//            {
//                arr[i][j] = ' ';
//            }
//        }
//    }
//    //循环打印数组
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < n; ++j)
//        {
//            printf("%c",arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////矩阵转置
//#include <stdio.h>
//int main()
//{
//    //输入矩阵的行和列
//    int i = 0;
//    int j = 0;
//    scanf("%d %d",&i,&j);
//    int sum[i][j];
//    //循环存储数组数字
//    for (int k = 0; k < i; ++k)
//    {
//        for (int l = 0; l < j; ++l)
//        {
//            scanf("%d",&sum[k][l]);
//        }
//    }
//    //矩阵转置
//    for (int k = 0; k < i; ++k)
//    {
//        for (int l = 0; l < j; ++l)
//        {
//            printf("%d ",sum[l][k]);
//        }
//        printf("\n");
//    }
//    return 0;
////}
////逆序输出
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int sum[n];
//    for (int i = 0; i < n; ++i)
//    {
//      scanf("%d",&sum[i]);
//    }
//    int left = 0;
//    int right = n-1;
//    while (left<=right)
//    {
//        int temp = sum[left];
//        sum[left] = sum[right];
//        sum[right] = temp;
//        left++;
//        right--;
//    }
//    for (int i = 0; i < n; ++i)
//    {
//        printf("%d ",sum[i]);
//    }
//    return 0;
//}
//求平局值
int ear(int sum[10])
{
    int and = 0;
    for (int i = 0; i < 10; ++i)
    {
        and +=sum[i];
    }
    int c =and/10;
    return c;
}
#include <stdio.h>
int main()
{
    //输入数组
    int sum[10];
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d",&sum[i]);
    }
     int c =ear(sum);
    printf("%d",c);
    return 0;
}