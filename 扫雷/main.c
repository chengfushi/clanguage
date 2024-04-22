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
    char mine[ROWS][COLS];//布置存放好的雷
    char show[ROWS][COLS];//存放排查出雷的信息
    //初始化棋盘
    //1.mine最开始全是'*'
    //2.show最开始全是'0'
    Initboard(mine,ROWS,COLS,'0');
    Initboard(show,ROWS,COLS,'*');
    //打印棋盘
    Displayboard(mine,ROWS,COLS);
    Displayboard(show,ROWS,COLS);
//1. 布置雷
    SetMine(mine, ROW, COL);
//DisplayBoard(mine, ROW, COL);
//2. 排查雷
    FindMine(mine, show, ROW, COL);
}
int main()
{
    //是否玩游戏
    int input = 0;
    do {
        //打印背景
        mneu();
        printf("请选择：\n");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误\n");
        }
    } while (input);
    return 0;
}
