#include "game.h"
void game()
{
    char mine[ROWS][COLS]={ 0 };
    char show[ROWS][COLS]={ 0 };
    printf("本游戏‘雷’用‘1’表示。\n");
    //初始化棋盘
    InitBoard1(mine,ROWS,COLS,'0');
    InitBoard2(show,ROWS,COLS,'*');
    //展示棋盘
    DisplayBoard(show,ROW,COL);
    //布置雷
    InputBoom(mine,ROW,COL);
    //玩家玩游戏
    PlayBoard(mine,show,ROW,COL);
}
void menu()
{
    printf("欢迎游玩数字扫雷游戏。\n");
    printf("********************\n");
    printf("*******1. play******\n");
    printf("*******0. exit******\n");
    printf("********************\n");
}
void test()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do {
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏。\n");
                break;
            default:
                printf("非法字符，请重新输入。\n");
                break;
        }
    }while(input);
}
int main() {
    test();
    return 0;
}
