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
//��ӡ����
void Displayboard(char board[ROWS][COLS], int row, int col)
{
    printf("������������������������ɨ����Ϸ��������������������\n");
    // ��ӡ�к�
    printf(" ");
    for (int i = 0; i < col; ++i)
    {
        printf("%d", i);
    }
    printf("\n");

    // ��ӡ�кź���������
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
//����10����
//������������꣬������
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
        printf("������Ҫ�Ų������:>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (mine[x][y] == '1')
            {
                printf("���ź����㱻ը����\n");
                Displayboard(mine, ROW, COL);
                break;
            }
            else
            {
//��λ�ò����ף���ͳ�����������Χ�м�����
                int count = GetMineCount(mine, x, y);
                show[x][y] = count + '0';
                Displayboard(show, ROW, COL);
                win++;
            }
        }
        else
        {
            printf("����Ƿ�����������\n");
        }
    }
    if (win == row * col - EASY_COUNT)
    {
        printf("��ϲ�㣬���׳ɹ�\n");
        Displayboard(mine, ROW, COL);
    }
}