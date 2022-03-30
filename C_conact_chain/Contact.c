//
// Created by 28113 on 2022/3/29.
//

#include "Conact.h"
//����ܵĴ���ʵ��
void Print(StuInfom *p)
{
    printf("%-10s\t%-10s\t%-10s\t%-10s\n","����","����","��ַ","�绰");
    printf("%-10s\t%-10d\t%-10s\t%-10s\n",p->name,p->age,p->position,p->tele);
}
//1.չʾͨѶ¼
void ShowConact(StuInfom *p)
{
    StuInfom *t = p;
    t = t->next;
    int i = 1;
    if(t == NULL)
    {
        printf("ͨѶ¼Ϊ�գ��������ϵ��\n");
        return;
    }
    printf("\t%-10s\t%-10s\t%-10s\t%-10s\n","����","����","��ַ","�绰");
    while(t)
    {
        printf("%d\t%-10s\t%-10d\t%-10s\t%-10s\n",i,t->name,t->age,t->position,t->tele);
        t = t->next;
        i++;
    }
}
//2.������ϵ����Ϣ
void Input(StuInfom *p,int *e,StuInfom **t)
{
    int n = 1;
        do{
            printf("*******1.���   0.�˳�**********\n");
            printf("������ѡ��:");
            scanf("%d",&n);
            if(n == 0)
            {
                break;
            } else if(n == 1) {
                StuInfom *tran = (StuInfom *) malloc(sizeof(StuInfom));
                (*t)->next = tran;
                *t = tran;
                printf("�������%d���˵�����:", *e);
                scanf("%s", (*t)->name);
                printf("�������%d���˵�����:", *e);
                scanf("%d", &((*t)->age));
                printf("�������%d���˵ĵ�ַ:", *e);
                scanf("%s", (*t)->position);
                printf("�������%d���˵ĵ绰����:", *e);
                scanf("%s", (*t)->tele);
                printf("��ӳɹ�\n");
                (*t)->next = NULL;
                (*e)++;
            } else{
                printf("�Ƿ����룬����������.\n");
            }
        }while(n);
    printf("�˳���ӳɹ�.\n");
}
//3.��ѯ��ϵ��
void Search(StuInfom *p){
    StuInfom  *t = p;
    int choice;
    char name[10];
    int age;
    char position[20];
    char tele[20];
    do {
        printf("*******1. ͨ��������ѯ   2. ͨ�������ѯ   3.ͨ����ַ��ѯ   4.ͨ���绰�����ѯ  0.�˳���ѯ********\n");
        printf("�������ѯ��ʽ:");
        scanf("%d", &choice);
        if(choice == 0)
        {
            printf("�˳���ѯ\n");
            break;
        }
        switch (choice) {
            case 1:
                t = p;
                printf("������Ҫ��ѯ������:");
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
                printf("������Ҫ��ѯ������:");
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
                printf("������Ҫ��ѯ�ĵ�ַ:");
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
                printf("������Ҫ��ѯ�ĵ绰���룺");
                scanf("%s", tele);
                while (t) {
                    if (strcmp(tele,t->tele) == 0) {
                        Print(t);
                    }
                    t = t->next;
                }
                break;
            default:
                printf("�������,����������.\n");
        }
    } while (choice);
}
void Delete(StuInfom *p,int *e,StuInfom **t)
{
    StuInfom *q = p;
    char name[10];
    ShowConact(p);
    printf("������Ҫɾȥ����ϵ�˵�����:");
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
            printf("ɾ���ɹ�.\n");
            return;
        }
        p = q;
        q = q->next;
    }
    printf("δ�鵽����ϵ��.\n");
}
void Insert(StuInfom *p){
    ShowConact(p);
    int n,i;
    StuInfom *t = (StuInfom*) malloc(sizeof (StuInfom));
    printf("������Ҫ����������:");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("����������ϵ�˵���Ϣ:\n");
            printf("��������˵�����:");
            scanf("%s",t->name);
            printf("��������˵�����:");
            scanf("%d",&(t->age));
            printf("��������˵ĵ�ַ:");
            scanf("%s",t->position);
            printf("��������˵ĵ绰����");
            scanf("%s",t->tele);
            t->next = p->next;
            p->next = t;
            printf("����ɹ�.\n");
        }
         p = p->next;
    }
}
