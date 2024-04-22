#ifndef TEXT4_22_GAME_H
#define TEXT4_22_GAME_H
#endif //TEXT4_22_GAME_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW  9
#define COL  9
#define ROWS  (ROW + 2)
#define COLS  (COL + 2)
#define EASY_COUNT 10
//定义棋盘
void Initboard(char board[ROWS][COLS],int rows,int cols,char set);
//打印棋盘
void Displayboard(char board[ROWS][COLS],int row,int col);
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


