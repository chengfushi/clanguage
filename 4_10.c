/*猜数字游戏 10次机会*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int nume()
{
    printf("*******************\n");
    printf("******1.play*******\n");
    printf("******0.ecit*******\n");
    printf("*******************\n");
}
int game()
{
    //生成随机数
    int r = rand()%100+1;
    //输入一个数字
    int guess = 0;
    printf("猜一个1——100之间的数字\n");
    scanf("%d",&guess);
    //10次机会
    int count = 10;
    while(count)
    {
        if(guess>r)
        {
            printf("猜大了\n");
        }
        else if(guess<r)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
        //猜错了重新猜
        printf("请重新猜一个数字\n");
        scanf("%d",&guess);
        //机会减1
        count--;
        //如果机会用完了，则停止循环
        if(count==0)
        {
            printf("机会用完了\n");
        }
    }
}
int goon()
{
    printf("*******************\n");
    printf("******要再来一次吗****\n");
    printf("******1.再来一次*****\n");
    printf("******0.结束游戏******\n");
    printf("*******************\n");
}
int main()
{
//生成一个随机数种子
    int input = 0;
    srand((signed int) time(NULL));
    do
    {
        //操作界面
        nume();
        printf("请选择:\n");
        scanf("%d",&input);
        //根据输入选择是否继续进行游戏
        switch (input)
        {
            case 0:
                printf("退出游戏\n");
                input = 0;
                break;
            case 1:
                game();
                break;
            default:
                printf("输入错误\n");
                input = 0;
        }
        //是否继续进行游戏
        if(input!=0)
        {
            goon();
            scanf("%d",&input);
        }
    }while(input);
    return 0;
}
