//
// Created by 30362 on 2024/4/5.
//
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    float f = 0.0f;
//    int r = scanf("%d %d %f", &a, &b, &f);
//    printf("a=%d b=%d f=%f\n", a, b, f);
//    printf("r=%d\n",r);
//    return 0;
//}
//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//#include <stdio.h>
//int main()
//{
//    int n=0;
//    for (int i = 1; i < 5; ++i)//百位上的数字循环一遍
//    {
//        for (int j = 1; j < 5; ++j)//十位上的数字循环一遍
//        {
//            for (int k = 1; k < 5; ++k)//个位上的数字循环一遍
//            {
//                if(i!=j&&j!=k&&i!=k)//确保不同
//                {
//                    printf("%d%d%d\n",i,j,k);
//                    n++;
//                }
//            }
//        }
//    }
//    printf("%d\n",n);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a = 176, b = 219;
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", a, a, b, a, a);
//    printf("%c%c%c%c%c\n", a, b, a, b, a);
//    printf("%c%c%c%c%c\n", b, a, a, a, b);
//
//    return 0;
//}
//兔子数列
//#include <stdio.h>
//int main()
//{
//    int a = 1,b = 1;
//    int r;//定义兔子数目
//    int day;
//    printf("请输入天数：\n");
//    scanf("%d",&day);
//    for (int i = 3; i <= day; ++i) //循环经历第3到n天
//    {
//        r = a + b;
//        printf("第%d天兔子为：%d\n",i,r);
//        a = b;//将b赋值给a
//        b = r;
//    }
//    return 0;
//}