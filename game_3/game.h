//
// Created by 28113 on 2021/12/7.
//
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>
#define PI 3.14159265359
#define T px + scale * r * cosf(theta), py + scale * r * sin(theta)
#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define easy_count 10
void InitBoard1(char board[ROWS][COLS],int rows,int cols,char dot);
void InitBoard2(char board[ROWS][COLS],int rows,int cols,char dot);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void InputBoom(char board[ROWS][COLS],int row,int col);
void PlayBoard(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);