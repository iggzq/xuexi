//
// Created by 28113 on 2021/12/5.
//
#include "game.h"
void InitBoard(char board[ROW][COL],int row,int col)
{
    int i = 0,j = 0;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            board[i][j]=' ';
        }
    }
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for( i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        if(i < row -1)
        {
            for(j = 0;j<col;j++)
            {
                printf("---");
                if(j<col-1)
                {
                    printf("|");
                }
            }
        }
        printf("\n");
    }
}
void Playermove(char board[ROW][COL],int row,int col)
{
    int x,y;
    printf("玩家回合：\n");
    printf("请输入要下的坐标。\n");
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x>=1&&x<=3&&y>=1&&y<=3)
        {
            if(board[x-1][y-1]==' ') {
                board[x - 1][y - 1] = '*';
                break;
            }else{
                printf("该地方已经有棋了，请重新选择。\n");
            }
        }else{
            printf("坐标非法，请重新输入");
        }
    }
}
void Computermove(char board[ROW][COL],int row,int col) {
    int x;
    int y;
    printf("电脑回合：\n");
    while (1) {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ') {
            printf("电脑输入的坐标：%d %d\n",x,y);
            board[x][y] = '#';
            break;
        }
    }
}