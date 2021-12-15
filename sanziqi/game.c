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
    printf("��һغϣ�\n");
    printf("������Ҫ�µ����ꡣ\n");
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x>=1&&x<=3&&y>=1&&y<=3)
        {
            if(board[x-1][y-1]==' ') {
                board[x - 1][y - 1] = '*';
                break;
            }else{
                printf("�õط��Ѿ������ˣ�������ѡ��\n");
            }
        }else{
            printf("����Ƿ�������������");
        }
    }
}
void Computermove(char board[ROW][COL],int row,int col) {
    int x;
    int y;
    printf("���Իغϣ�\n");
    while (1) {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ') {
            printf("������������꣺%d %d\n",x,y);
            board[x][y] = '#';
            break;
        }
    }
}