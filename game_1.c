//�������Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void mneu()
{
    printf("**********************\n");
    printf("**********************\n");
    printf("*******1.play*********\n");
    printf("*******0.exit*********\n");
    printf("**********************\n");
    printf("**********************\n");
}
void game() {
    //���������
    int r = rand() % 100 + 1;
    int guess = 0;
    //������µ�����
    printf("������һ������");
    scanf("%d", &guess);
    //������
    while (1)
    {
        if (guess > r)
        {
            printf("�´���\n");
        } else if (guess < r)
        {
            printf("��С��\n");
        } else
        {
            printf("�¶���\n");
            break;
        }
        //�´������²�
        printf("����������һ������\n");
        scanf("%d",&guess);
    }
}
int main()
{
    int input = 0;
    //����һ������
    srand((unsigned int)time(NULL));
    do {
        //����ҳ��
        mneu();
        printf("��ѡ��");
        scanf("%d",&input);
        switch (input)
        {
            //����1����Ϸ
            case 1:
                game();
                break;
            //����2����
            case 0:
                printf("��Ϸ����");
                break;
            default:
                printf("�����������������");

        }
    }while(input);
    return 0;
}