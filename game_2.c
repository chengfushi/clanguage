// �������Ϸ10�λ���
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
void game()
{
    // ���������
    int r = rand() % 100 + 1;
    int guess = 0;
    int count = 10;
    // ������µ�����
    printf("������һ������");
    scanf("%d", &guess);
    // ������
    while (count)
    {
        printf("�㻹��%d�λ���\n", count);
        if (guess > r)
        {
            printf("�´���\n");
        }
        else if (guess < r)
        {
            printf("��С��\n");
        }
        else
        {
            printf("�¶���\n");
            break;
        }
        count--;
        // �´������²�
        printf("����������һ������\n");
        scanf("%d", &guess);
    }
    if (count == 0)
    {
        printf("��ʧ���ˣ���ȷ����%d\n", r);
    }
}
int main()
{
    int input = 0;
    // ����һ������
    srand((unsigned int)time(NULL));
    do
    {
        // ����ҳ��
        mneu();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input)
        {
        // ����1����Ϸ
        case 1:
            game();
            break;
            // ����2����
        case 0:
            printf("��Ϸ����");
            break;
        default:
            printf("�����������������");
        }
    } while (input);
    return 0;
}