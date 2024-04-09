// 随机数游戏10次机会
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
    // 生成随机数
    int r = rand() % 100 + 1;
    int guess = 0;
    int count = 10;
    // 输入你猜的数字
    printf("请输入一个数字");
    scanf("%d", &guess);
    // 猜数字
    while (count)
    {
        printf("你还有%d次机会\n", count);
        if (guess > r)
        {
            printf("猜大了\n");
        }
        else if (guess < r)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
        count--;
        // 猜错了重新猜
        printf("请重新输入一个数字\n");
        scanf("%d", &guess);
    }
    if (count == 0)
    {
        printf("你失败了，正确答案是%d\n", r);
    }
}
int main()
{
    int input = 0;
    // 生成一个种子
    srand((unsigned int)time(NULL));
    do
    {
        // 背景页面
        mneu();
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        // 输入1玩游戏
        case 1:
            game();
            break;
            // 输入2不玩
        case 0:
            printf("游戏结束");
            break;
        default:
            printf("输入错误请重新输入");
        }
    } while (input);
    return 0;
}