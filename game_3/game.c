//
// Created by 28113 on 2021/12/7.
//
#include "game.h"
void InitBoard1(char board[ROWS][COLS],int rows,int cols,char dot)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            board[i][j]=dot;
        }
    }
}
void InitBoard2(char board[ROWS][COLS],int rows,int cols,char dot)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j<cols; j++)
        {
            board[i][j]=dot;
        }
    }
}
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    int i = 0;
    int j = 0;
    for(i = 0; i <= row; i++){
        printf("%d ",i);
    }
    printf("\n");
    for(i = 1; i <= row; i++)
    {
        printf("%d ",i);
        for(j = 1; j <= col; j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}
void InputBoom(char board[ROWS][COLS],int row,int col)
{
    int count = easy_count;
    int x = 0;
    int y = 0;
    while(count)
    {
        x=rand()%row + 1;
        y=rand()%col + 1;
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count--;
        }
    }
}
char get_mine_count(char mine[ROWS][COLS], int x, int y)
{
    char count = '0';
    int i = 0;
    int j = 0;
    for(i = x-1; i <= x+1; i++)
    {
        for(j =y-1;j <= y+1; j++)
        {
            if(mine[i][j]=='1')
            {
                count++;
            }
        }
    }
    return count;
}
void Panduan(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y)
{
    int i;
    int j;
    if (get_mine_count(mine, x, y)=='0') {
        show[x][y]=' ';
        for (i = x-1; i <=x+1; i++)
        {
            for (j = y-1; j <=y+1; j++)
            {
                if (i > 0 && i <= ROW && j > 0 && j <= COL&&show[i][j]=='*')
                {
                    Panduan(mine, show, i, j);
                }
            }
        }
    }else{
        show[x][y]= get_mine_count(mine,x,y);
         }
}
int JianSuoBoard(char show[ROWS][COLS],int row,int col)
{
    int i = 0;
    int j = 0;
    int count = 0;
    for(i = 1; i<=row; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if (show[i][j] == '*')
            {
                count++;
            }
        }
    }
    return count;
}
void PlayBoard(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x = 0;
    int y = 0;
    while(1)
    {
        printf("����������:");//8 8
        scanf("%d%d",&x,&y);
        if(x>=1&&x<=row&&y>=1&&y <= col)
        {
            if(mine[x][y]=='1')
            {
                printf("���ź��㱻ը���ˡ�\n");
                printf("'1'����˴�Ϊ�ף������������£�\n");
                DisplayBoard(mine,row,col);
                break;
            }else{
                Panduan(mine, show, x, y);// 8 8
                DisplayBoard(show,row,col);
                int count = JianSuoBoard(show,row,col);
                if(count == easy_count)
                {
                    printf("��ϲ�㣬��Ϸ��ʤ��\n");
                    printf("\n");
                    break;
                }
            }
        }
        else
        {
            printf("����Ƿ����������롣\n");
        }
    }
}











































