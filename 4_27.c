//#include <stdio.h>
//
//int countDifferentBits(int num1, int num2) {
//    int xorResult = num1 ^ num2; // �������õ���ͬλ
//    int count = 0;
//    while (xorResult != 0) {
//        count += xorResult & 1; // ������λ�Ƿ�Ϊ1
//        xorResult >>= 1; // ����һλ
//    }
//    return count;
//}
//
//int main() {
//    int num1 = 5; // �����Ʊ�ʾΪ 0101
//    int num2 = 10; // �����Ʊ�ʾΪ 1010
//    printf("Number of different bits between %d and %d is: %d\n", num1, num2, countDifferentBits(num1, num2));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i)+(++i)+(++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,3,4,5};
//    short *p = (short*)arr;
//    int i = 0;
//    for(i=0; i<4; i++)
//    {
//        *(p+i) = 0;
//    }
//
//    for(i=0; i<5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}