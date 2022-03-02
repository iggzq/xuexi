//
// Created by 28113 on 2022/2/27.
//
#include "contact.h"


void InitContact(struct Contact *ps) {
    memset(ps->data, 0, sizeof(ps->data));
    ps->size = 0;
}

void AddContact(struct Contact *ps) {
    if (ps->size == MAX) {
        printf("数据已满\n");
    } else {
        printf("请输入姓名：");
        scanf("%s", ps->data[ps->size].name);
        printf("请输入年龄：");
        scanf("%d", &(ps->data[ps->size].age));
        printf("请输入性别：");
        scanf("%s", ps->data[ps->size].sex);
        printf("请输入电话号码：");
        scanf("%s", ps->data[ps->size].tele);
        printf("请输入地址：");
        scanf("%s", ps->data[ps->size].addr);
        ps->size++;
        // 保存
        printf("添加成功\n");
    }
}

void ShowContact(struct Contact *ps) {
    if (ps->size == 0) {
        printf("通讯录为空\n");
    } else {
        int i = 0;
        printf("%-10s\t%-10s\t%-10s\t%-15s\t%-10s\n", "姓名", "年龄", "性别", "电话", "地址");
        for (i = 0; i < ps->size; i++) {
            printf("%-10s\t%-10d\t%-10s\t%-15s\t%-10s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex,
                   ps->data[i].tele, ps->data[i].addr);
        }

    }
}
static int FindByName(struct Contact* ps,char name[MAX_NAME])
{
    int i = 0;
    for(i = 0; i < ps->size; i++)
    {
         if(0 == strcmp(ps->data[i].name,name))
         {
             return i;
         }
    }
    return -1;
}
void Printf(struct Contact* ps,int* i)
{
    if(*i == -1)
    {
        printf("查无此人\n");
    }
    else
    {
        printf("%-10s\t%-10s\t%-10s\t%-15s\t%-10s\n", "姓名", "年龄", "性别", "电话", "地址");
        printf("%-10s\t%-10d\t%-10s\t%-15s\t%-10s\n", ps->data[*i].name, ps->data[*i].age, ps->data[*i].sex,
               ps->data[*i].tele, ps->data[*i].addr);
    }
}
void DelContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("请输入要删除人的名字：\n");
    scanf("%s",name);
    int pos = FindByName(ps,name);
    if(pos == -1)
    {
        printf("查无此人\n");
    } else{
        int j = 0;
        for(j = pos; j < ps->size-1; j++)
        {
            ps->data[j] = ps->data[j + 1];
        }
        ps->size--;
        printf("删除成功\n");
    }
}
void SearchContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("请输入要查找的联系人姓名: \n");
    scanf("%s",name);
    int i = FindByName(ps,name);
    Printf(ps,&i);
}
void MdFiContact(struct Contact* ps)
{
    printf("请输入要修改的联系人名称\n");
    char name[MAX_NAME];
    scanf("%s",name);
    int i = FindByName(ps,name);
    Printf(ps,&i);
    printf("请输入要修改的内容\n");
    printf("0 —— 姓名   1 —— 年龄  2 —— 性别  3 —— 电话  4 —— 地址\n");
    int b;
    scanf("%d",&b);
    switch(b)
    {
        case 0:
            printf("****确认修改姓名****\n");
            printf("请输入新的姓名: \n");
            char c[MAX_NAME];
            scanf("%s",c);
            strcpy(ps->data[i].name,c);
            printf("修改成功\n");
            break;
        case 1:
            printf("****确认修改年龄****\n");
            printf("请输入新的年龄：\n");
            int age = 0;
            scanf("%d",&age);
            ps->data[i].age = age;
            printf("修改成功\n");
            break;
        case 2:
            printf("****确认修改性别****\n");
            printf("请输入新的性别：\n");
            char sex[MAX_SEX];
            scanf("%s",sex);
            strcpy(ps->data[i].sex,sex);
            break;
        case 3:
            printf("****确认修改电话****\n");
            printf("请输入新的电话");
            char tele[MAX_TELE];
            scanf("%s",tele);
            strcpy(ps->data[i].tele,tele);
            printf("修改成功\n");
            break;
        case 4:
            printf("****确认修改地址****\n");
            printf("请输入新的地址:\n");
            char addr[MAX_ADDR];
            scanf("%s",addr);
            strcpy(ps->data[i].addr,addr);
            printf("修改成功\n");
            break;
    }
}
//int cmp(const void* p1,const void* p2)
//{
//    return strcmp((*(Contact *)p1).,(*(Contact *)P2).d);
//}
void SortContact(struct Contact* ps){
//    qsort(ps->data,MAX,sizeof (ps->data[0]),cmp);
    struct infortmation t;
    int i = 0;
    int j = 0;
    for (i = 0; i <= ps->size; i++) {
        for (j = 0; j <= ps->size-i; j++) {
            int l = strcmp(ps->data[j].name, ps->data[j+1].name);
            if (l > 0) {
                t = ps->data[j];
                ps->data[j] = ps->data[i];
                ps->data[i] = t;
            }
        }
    }
}