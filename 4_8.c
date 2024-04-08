//分支
#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d",&a,&b);
//    if(a>b)
//    {
//        printf("hehe");
//    }
//    else if(a==b)
//    {
//        printf("haha");
//    }else
//    {
//        printf("cao");
//    }
//    return 0;
//}
//关系语句真假
//int main()
//{
//    int a = (3 == 5);
//    printf("%d",a);
//    return 0;
//}
//逻辑语句判断
//int main()
//{
//    int year;
//    scanf("%d",&year);
//    if((year%4==0&&year%100!=0)||(year%400==0) )
//    {
//        printf("是闰年");
//    }
//    else
//    {
//        printf("不是闰年");
//    }
//    return 0;
//}
//比大小
//int main()
//{
//    int a = 5;
//    int b = 6;
//    printf("%d",a>b?a:b);
//    return 0;
//}
//int main()
//{
//    int i = 0,a = 0,b = 2,c = 3,d = 4;
//    i=(a++ && ++b && d++);
//    printf("%d%d%d%d%d",i,a,b,c,d);
//    return 0;
//}
//int main()
//{
//    int i = 0,a = 1,b = 2,c = 3,d = 4;
//    i=(a++ && ++b && d++);
//    printf("%d%d%d%d%d",i,a,b,c,d);
//    return 0;
//}
//int main()
//{
//    int i = 0,a = 1,b = 2,c = 3,d = 4;
//    i=(a++ && ++b && d++);
//    printf("%d%d%d%d%d",i,a,b,c,d);
//    return 0;
//}
//int main()
//{
//    int i = 0,a = 0,b = 2,c = 3,d = 4;
//    i=(a++ || ++b || d++);
//    printf("%d%d%d%d%d",i,a,b,c,d);
//    return 0;
//}
////计算余数
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    //计算余数
//    switch (n%3) {
//        case 0:
//            printf("余数是0\n");
//            break;
//        case 1:
//            printf("余数是1\n");
//            break;
//        case 2:
//            printf("余数是2\n");
//    }
//    return 0;
//}
//int main()
//{
//    int a = 5;
//    while(a>0)
//        printf("hehe\n");
//    return 0;
//}
//打印数字每一位
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    while(n)
//    {
//        printf("%d ",n%10);
//        n  = n/10;
//    }
//    return 0;
//}
//计算100以内三的倍数之和
//int main()
//{
//    int sum = 0;
//    for (int i = 0; i <100; ++i) {
//        if(i%3==0)
//        {
//            sum+=i;
//        }
//    }
//    printf("%d",sum);
//    return 0;
//}