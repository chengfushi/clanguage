#include "game.h"
//��������Ϸ//ʮ�λ���
void mnue()
{
    printf("*******************\n");
    printf("******1.play*******\n");
    printf("******0.none*******\n");
    printf("*******************\n");
}
int main()
{
    //���費����Ϸ
    int input = 0;
    do
    {
        mnue();
        printf("��ѡ��\n");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                printf("��Ϸ��ʼ:\n");
                game();
                break;
            case 0:
                printf("��Ϸ����\n");
                break;
            default:
                printf("�������\n");
        }
    }while(input);
    return 0;
}