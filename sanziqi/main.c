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
    InitBoard(board,ROW,COL);//��ʼ������
    DisplayBoard(board,ROW,COL);//��ӡ����
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
            printf("��ӭ����%d������Ϸ:\n",ROW);
            game();
            break;
        case 0:
            printf("�˳���Ϸ��\n");
        default:
            printf("�����������������\n");
    }
}
int main() {
    test();
    return 0;
}
