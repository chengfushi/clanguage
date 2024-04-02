///*测试ASCII码表*/
#include <stdio.h>
//int main(void)
//{
////   循环输出ASCII码
//    for(int i=32;i<128;i++){
//        printf("%c",i);
////        每16个字符换行
//    if(i%16==15){
//        printf("\n");
//        }
//    }
//    return 0;
//}
/*a++和++a的区别*/
#include<stdio.h>
//int main(){
//    int a=0;
//    int b=++a;
//    int c=a++;
//    printf("%d\n",b);
//    printf("%d\n",c);
//    return 0;
//}
//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    a = 5;
//    c = ++a;
//    b = ++c, c++, ++a, a++;
//    b += a++ + c;
//    printf("a = %d b = %d c = %d\n:", a, b, c);
//    return 0;
//}
/*负数求模*/
#include <stdio.h>
//int main(){
//    printf("%d\n",11%5);
//    printf("%d\n",-11%-5);
//    printf("%d\n",11%-5);
//    return 0;
//}
/*复合赋值*/
//#include <stdio.h>
//int main(){
//    int a=0;
//    a++;
//    a=a+5;
//    printf("%d",a);
//    return 0;
//}
//#include <stdio.h>
//int main(){
//    int a=5,b;
//    b=a--;
//    printf("%d\n%d\n",a,b);
//    return 0;
//}
/*强制类型转换*/
//#include <stdio.h>
//int main(){
//    int a=(int)3.14;
//    printf("%d",a);
//    return  0;
//}
/*冒泡排序*/
//int main() {
//    int n;
//    printf("请输入要排序数字的个数");
//    scanf("%d", &n);
//    int a[n];
////    将数据存储到数组中
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
////    如果左边数字大于右边，则交换位置
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n - 1; j++) {
//            if (a[j] > a[j + 1]) {
//                int temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
////    排序后的数组
//    printf("排序后的数组为：");
//    for (int i = 0; i <n ; i++) {
//        printf("%d",a[i]);
//    }
//    return 0;
//}
/*数组*/
//int main(){
//    int a[]={1,2,3,4,5};
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j <4 ; j++) {
//           int temp=a[j];
//
//
//        }
//        a[j]=a[j+1];
//           a[j+1]=temp;
//        }
//    for (int i = 0; i <4 ; i++) {
//        printf("%d",a[i]);
//    }
//
//    return 0;
//    }
