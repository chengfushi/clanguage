//
// Created by 30362 on 2024/4/4.
//
//��n���ڵ�����
#include<stdio.h>
int main()
{
    //��������n
    int n;
    printf("�����������");
    scanf("%d",&n);
    //ѭ������1��n
    for (int i = 2; i <= n; ++i) {
        //ѭ������1��i
        for (int j = 2; j < i; ++j) {
            if(i%j==0){
                break;//���i�ܱ�j������������ѭ��
            }if(j==i-1){
                printf("%d\n",i);//���j����i-1�������i
            }
        }
    }
    return 0;
}