//
// Created by 28113 on 2022/3/29.
//

#ifndef C_CHAIN_CONACT_H
#define C_CHAIN_CONACT_H

#endif //C_CHAIN_CONACT_H
#include <stdio.h>
#include <malloc.h>
#include "string.h"
typedef struct  {
    char name[10];
    int age;
    char position[20];
    char tele[20];
    struct StuInfom *next;
} StuInfom;
void ShowConact(StuInfom *p);
void Input(StuInfom *p,int *e,StuInfom **t);
void Search(StuInfom *p);
void Delete(StuInfom *p,int *e,StuInfom **t);
void Insert(StuInfom *p);