//
// Created by 28113 on 2022/3/29.
//

#include "Conact.h"
//各项功能的代码实现
void Print(StuInfom *p)
{
    printf("%-10s\t%-10s\t%-10s\t%-10s\n","姓名","年龄","地址","电话");
    printf("%-10s\t%-10d\t%-10s\t%-10s\n",p->name,p->age,p->position,p->tele);
}
//1.展示通讯录
void ShowConact(StuInfom *p)
{
    StuInfom *t = p;
    t = t->next;
    int i = 1;
    if(t == NULL)
    {
        printf("通讯录为空，请添加联系人\n");
        return;
    }
    printf("\t%-10s\t%-10s\t%-10s\t%-10s\n","姓名","年龄","地址","电话");
    while(t)
    {
        printf("%d\t%-10s\t%-10d\t%-10s\t%-10s\n",i,t->name,t->age,t->position,t->tele);
        t = t->next;
        i++;
    }
}
//2.输入联系人信息
void Input(StuInfom *p,int *e,StuInfom **t)
{
    int n = 1;
        do{
            printf("*******1.添加   0.退出**********\n");
            printf("请输入选项:");
            scanf("%d",&n);
            if(n == 0)
            {
                break;
            } else if(n == 1) {
                StuInfom *tran = (StuInfom *) malloc(sizeof(StuInfom));
                (*t)->next = tran;
                *t = tran;
                printf("请输入第%d个人的姓名:", *e);
                scanf("%s", (*t)->name);
                printf("请输入第%d个人的年龄:", *e);
                scanf("%d", &((*t)->age));
                printf("请输入第%d个人的地址:", *e);
                scanf("%s", (*t)->position);
                printf("请输入第%d个人的电话号码:", *e);
                scanf("%s", (*t)->tele);
                printf("添加成功\n");
                (*t)->next = NULL;
                (*e)++;
            } else{
                printf("非法输入，请重新输入.\n");
            }
        }while(n);
    printf("退出添加成功.\n");
}
//3.查询联系人
void Search(StuInfom *p){
    StuInfom  *t = p;
    int choice;
    char name[10];
    int age;
    char position[20];
    char tele[20];
    do {
        printf("*******1. 通过姓名查询   2. 通过年龄查询   3.通过地址查询   4.通过电话号码查询  0.退出查询********\n");
        printf("请输入查询方式:");
        scanf("%d", &choice);
        if(choice == 0)
        {
            printf("退出查询\n");
            break;
        }
        switch (choice) {
            case 1:
                t = p;
                printf("请输入要查询的姓名:");
                scanf("%s", name);
                while (t) {
                    if (strcmp(t->name, name) == 0) {
                        Print(t);
                    }
                    t = t->next;
                }
                break;
            case 2:
                t = p;
                printf("请输入要查询的年龄:");
                scanf("%d", &age);
                while (t) {
                    if (age == t->age) {
                        Print(t);
                    }
                    t = t->next;
                }
                break;
            case 3:
                t = p;
                printf("请输入要查询的地址:");
                scanf("%s", position);
                while (t) {
                    if (strcmp(position, t->position) == 0) {
                        Print(t);
                    }
                    t = t->next;
                }
                break;
            case 4:
                t = p;
                printf("请输入要查询的电话号码：");
                scanf("%s", tele);
                while (t) {
                    if (strcmp(tele,t->tele) == 0) {
                        Print(t);
                    }
                    t = t->next;
                }
                break;
            default:
                printf("输入错误,请重新输入.\n");
        }
    } while (choice);
}
void Delete(StuInfom *p,int *e,StuInfom **t)
{
    StuInfom *q = p;
    char name[10];
    ShowConact(p);
    printf("请输入要删去的联系人的姓名:");
    scanf("%s",name);
    while(q)
    {
        if(strcmp(name,q->name) == 0)
        {
            p->next  = q->next;
            if(p->next == NULL)
            {
                *t = q;
            }
            (*e)--;
            free(q);
            q = NULL;
            printf("删除成功.\n");
            return;
        }
        p = q;
        q = q->next;
    }
    printf("未查到此联系人.\n");
}
void Insert(StuInfom *p){
    ShowConact(p);
    int n,i;
    StuInfom *t = (StuInfom*) malloc(sizeof (StuInfom));
    printf("请输入要插入的序号是:");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("请输入新联系人的信息:\n");
            printf("请输入个人的姓名:");
            scanf("%s",t->name);
            printf("请输入个人的年龄:");
            scanf("%d",&(t->age));
            printf("请输入个人的地址:");
            scanf("%s",t->position);
            printf("请输入个人的电话号码");
            scanf("%s",t->tele);
            t->next = p->next;
            p->next = t;
            printf("插入成功.\n");
        }
         p = p->next;
    }
}
