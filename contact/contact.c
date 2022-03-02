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
        printf("��������\n");
    } else {
        printf("������������");
        scanf("%s", ps->data[ps->size].name);
        printf("���������䣺");
        scanf("%d", &(ps->data[ps->size].age));
        printf("�������Ա�");
        scanf("%s", ps->data[ps->size].sex);
        printf("������绰���룺");
        scanf("%s", ps->data[ps->size].tele);
        printf("�������ַ��");
        scanf("%s", ps->data[ps->size].addr);
        ps->size++;
        // ����
        printf("��ӳɹ�\n");
    }
}

void ShowContact(struct Contact *ps) {
    if (ps->size == 0) {
        printf("ͨѶ¼Ϊ��\n");
    } else {
        int i = 0;
        printf("%-10s\t%-10s\t%-10s\t%-15s\t%-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
        printf("���޴���\n");
    }
    else
    {
        printf("%-10s\t%-10s\t%-10s\t%-15s\t%-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
        printf("%-10s\t%-10d\t%-10s\t%-15s\t%-10s\n", ps->data[*i].name, ps->data[*i].age, ps->data[*i].sex,
               ps->data[*i].tele, ps->data[*i].addr);
    }
}
void DelContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("������Ҫɾ���˵����֣�\n");
    scanf("%s",name);
    int pos = FindByName(ps,name);
    if(pos == -1)
    {
        printf("���޴���\n");
    } else{
        int j = 0;
        for(j = pos; j < ps->size-1; j++)
        {
            ps->data[j] = ps->data[j + 1];
        }
        ps->size--;
        printf("ɾ���ɹ�\n");
    }
}
void SearchContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("������Ҫ���ҵ���ϵ������: \n");
    scanf("%s",name);
    int i = FindByName(ps,name);
    Printf(ps,&i);
}
void MdFiContact(struct Contact* ps)
{
    printf("������Ҫ�޸ĵ���ϵ������\n");
    char name[MAX_NAME];
    scanf("%s",name);
    int i = FindByName(ps,name);
    Printf(ps,&i);
    printf("������Ҫ�޸ĵ�����\n");
    printf("0 ���� ����   1 ���� ����  2 ���� �Ա�  3 ���� �绰  4 ���� ��ַ\n");
    int b;
    scanf("%d",&b);
    switch(b)
    {
        case 0:
            printf("****ȷ���޸�����****\n");
            printf("�������µ�����: \n");
            char c[MAX_NAME];
            scanf("%s",c);
            strcpy(ps->data[i].name,c);
            printf("�޸ĳɹ�\n");
            break;
        case 1:
            printf("****ȷ���޸�����****\n");
            printf("�������µ����䣺\n");
            int age = 0;
            scanf("%d",&age);
            ps->data[i].age = age;
            printf("�޸ĳɹ�\n");
            break;
        case 2:
            printf("****ȷ���޸��Ա�****\n");
            printf("�������µ��Ա�\n");
            char sex[MAX_SEX];
            scanf("%s",sex);
            strcpy(ps->data[i].sex,sex);
            break;
        case 3:
            printf("****ȷ���޸ĵ绰****\n");
            printf("�������µĵ绰");
            char tele[MAX_TELE];
            scanf("%s",tele);
            strcpy(ps->data[i].tele,tele);
            printf("�޸ĳɹ�\n");
            break;
        case 4:
            printf("****ȷ���޸ĵ�ַ****\n");
            printf("�������µĵ�ַ:\n");
            char addr[MAX_ADDR];
            scanf("%s",addr);
            strcpy(ps->data[i].addr,addr);
            printf("�޸ĳɹ�\n");
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