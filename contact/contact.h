//
// Created by 28113 on 2022/1/12.
//
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 15
#define MAX_ADDR 15
#define MAX 1000
#include <stdio.h>
#include "string.h"
#include <stdlib.h>
struct infortmation
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
};
struct Contact
{
    struct infortmation data[MAX];
    int size;
};
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(struct Contact* ps);
void MdFiContact(struct Contact* ps);
void SortContact(struct Contact* ps);