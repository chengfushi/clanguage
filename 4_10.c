/*��������Ϸ 10�λ���*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int nume()
{
    printf("*******************\n");
    printf("******1.play*******\n");
    printf("******0.ecit*******\n");
    printf("*******************\n");
}
int game()
{
    //���������
    int r = rand()%100+1;
    //����һ������
    int guess = 0;
    printf("��һ��1����100֮�������\n");
    scanf("%d",&guess);
    //10�λ���
    int count = 10;
    while(count)
    {
        if(guess>r)
        {
            printf("�´���\n");
        }
        else if(guess<r)
        {
            printf("��С��\n");
        }
        else
        {
            printf("�¶���\n");
            break;
        }
        //�´������²�
        printf("�����²�һ������\n");
        scanf("%d",&guess);
        //�����1
        count--;
        //������������ˣ���ֹͣѭ��
        if(count==0)
        {
            printf("����������\n");
        }
    }
}
int goon()
{
    printf("*******************\n");
    printf("******Ҫ����һ����****\n");
    printf("******1.����һ��*****\n");
    printf("******0.������Ϸ******\n");
    printf("*******************\n");
}
int main()
{
//����һ�����������
    int input = 0;
    srand((signed int) time(NULL));
    do
    {
        //��������
        nume();
        printf("��ѡ��:\n");
        scanf("%d",&input);
        //��������ѡ���Ƿ����������Ϸ
        switch (input)
        {
            case 0:
                printf("�˳���Ϸ\n");
                input = 0;
                break;
            case 1:
                game();
                break;
            default:
                printf("�������\n");
                input = 0;
        }
        //�Ƿ����������Ϸ
        if(input!=0)
        {
            goon();
            scanf("%d",&input);
        }
    }while(input);
    return 0;
}
