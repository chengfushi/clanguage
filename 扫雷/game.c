#include "game.h"
void Initboard(char board[ROWS][COLS],int rows,int cols,char set)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}
//打印棋盘
void Displayboard(char board[ROWS][COLS], int row, int col)
{
    printf("————————————扫雷游戏——————————\n");
    // 打印列号
    printf(" ");
    for (int i = 0; i < col; ++i)
    {
        printf("%d", i);
    }
    printf("\n");

    // 打印行号和棋盘内容
    for (int i = 0; i < row; ++i)
    {
        printf("%d", i);
        for (int j = 0; j < col; ++j)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
//布置10个雷
//生成随机的坐标，布置雷
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
    return (mine[x-1][y]+mine[x-1][y-1]+mine[x][y - 1]+mine[x+1][y-
                                                                 1]+mine[x+1][y]+
            mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1] - 8 * '0');
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while (win <row*col- EASY_COUNT)
    {
        printf("请输入要排查的坐标:>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (mine[x][y] == '1')
            {
                printf("很遗憾，你被炸死了\n");
                Displayboard(mine, ROW, COL);
                break;
            }
            else
            {
//该位置不是雷，就统计这个坐标周围有几个雷
                int count = GetMineCount(mine, x, y);
                show[x][y] = count + '0';
                Displayboard(show, ROW, COL);
                win++;
            }
        }
        else
        {
            printf("坐标非法，重新输入\n");
        }
    }
    if (win == row * col - EASY_COUNT)
    {
        printf("恭喜你，排雷成功\n");
        Displayboard(mine, ROW, COL);
    }
}