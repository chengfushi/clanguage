#include "game.h"
void game()
{
    int r =0;
    int num = 0;
    //ʮ�λ���
    int count = 10;
    //����һ��ʱ������������
    srand(time(NULL));
    r = rand()%100 - 1;
    printf("������һ�����֣�\n");
    scanf("%d",&num);
    while(count)
    {
        if(r<num)
        {
            printf("�´���\n");
            count--;
            if(count==0)
            {
                printf("��Ϸʧ��\n");
                break;
            }
            printf("�㻹��%d�λ���\n",count);
            printf("����������һ�����֣�");
            scanf("%d",&num);
        }
        else if(r>num)
        {
            printf("��С��\n");
            count--;
            if(count==0)
            {
                printf("��Ϸʧ��\n");
                break;
            }
            printf("�㻹��%d�λ���\n",count);
            printf("����������һ�����֣�");
            scanf("%d",&num);
        }
        else
        {
            printf("�¶��ˣ�������%d\n",r);
            break;
        }
    }
}