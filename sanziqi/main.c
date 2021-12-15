#include "game.h"
void display()
{
    printf("*********************\n");
    printf("**1. play   0. exit**\n");
    printf("*********************\n");
}
void game()
{
    char board[ROW][COL];
    InitBoard(board,ROW,COL);//初始化棋盘
    DisplayBoard(board,ROW,COL);//打印棋盘
    while(1)
    {
        Playermove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        Computermove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
    }
}
void test()
{
    srand((unsigned int)time(NULL));
    display();
    int input = 0;
    scanf("%d",&input);
    switch(input)
    {
        case 1:
            printf("欢迎游玩%d字棋游戏:\n",ROW);
            game();
            break;
        case 0:
            printf("退出游戏。\n");
        default:
            printf("输入错误，请重新输入\n");
    }
}
int main() {
    test();
    return 0;
}
