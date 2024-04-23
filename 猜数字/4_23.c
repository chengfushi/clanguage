#include "game.h"
//猜数字游戏//十次机会
void mnue()
{
    printf("*******************\n");
    printf("******1.play*******\n");
    printf("******0.none*******\n");
    printf("*******************\n");
}
int main()
{
    //假设不玩游戏
    int input = 0;
    do
    {
        mnue();
        printf("请选择：\n");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                printf("游戏开始:\n");
                game();
                break;
            case 0:
                printf("游戏结束\n");
                break;
            default:
                printf("输入错误\n");
        }
    }while(input);
    return 0;
}