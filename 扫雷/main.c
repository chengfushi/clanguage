#include "game.h"
void mneu()
{
    printf("**************\n");
    printf("****1.play****\n");
    printf("****2.none****\n");
    printf("**************\n");
}
void game()
{
    char mine[ROWS][COLS];//���ô�źõ���
    char show[ROWS][COLS];//����Ų���׵���Ϣ
    //��ʼ������
    //1.mine�ʼȫ��'*'
    //2.show�ʼȫ��'0'
    Initboard(mine,ROWS,COLS,'0');
    Initboard(show,ROWS,COLS,'*');
    //��ӡ����
    Displayboard(mine,ROWS,COLS);
    Displayboard(show,ROWS,COLS);
//1. ������
    SetMine(mine, ROW, COL);
//DisplayBoard(mine, ROW, COL);
//2. �Ų���
    FindMine(mine, show, ROW, COL);
}
int main()
{
    //�Ƿ�����Ϸ
    int input = 0;
    do {
        //��ӡ����
        mneu();
        printf("��ѡ��\n");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("�������\n");
        }
    } while (input);
    return 0;
}
