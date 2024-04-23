#include "game.h"
void game()
{
    int r =0;
    int num = 0;
    //十次机会
    int count = 10;
    //插入一个时间戳生成随机数
    srand(time(NULL));
    r = rand()%100 - 1;
    printf("请输入一个数字：\n");
    scanf("%d",&num);
    while(count)
    {
        if(r<num)
        {
            printf("猜大了\n");
            count--;
            if(count==0)
            {
                printf("游戏失败\n");
                break;
            }
            printf("你还有%d次机会\n",count);
            printf("请重新输入一个数字：");
            scanf("%d",&num);
        }
        else if(r>num)
        {
            printf("猜小了\n");
            count--;
            if(count==0)
            {
                printf("游戏失败\n");
                break;
            }
            printf("你还有%d次机会\n",count);
            printf("请重新输入一个数字：");
            scanf("%d",&num);
        }
        else
        {
            printf("猜对了，数字是%d\n",r);
            break;
        }
    }
}