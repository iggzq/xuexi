#include "Contact.c"
//�ṹ��Ĵ���
void menu()
{
    printf("*********** 1. ShowConact    2. Input      3. Search************\n");
    printf("*********** 4. Delete        5. Insert     0. Exit  ************\n");
}
int main() {
    StuInfom * p = (StuInfom *) malloc(sizeof(StuInfom));
    p->next = NULL;
    StuInfom *t = p;
    int n;
    int i = 1;
    do
    {
        menu();
        printf("���������ѡ��");
        scanf("%d",&n);
        switch (n) {
            case 1:
                ShowConact(p);
                break;
            case 2:
                Input(p,&i,&t);
                break;
            case 3:
                Search(p);
                break;
            case 4:
                Delete(p,&i,&t);
                break;
            case 5:
                Insert(p);
                break;
            case 0:
                printf("��������\n");
                break;
            default:
                printf("�����������������.\n");
        }
    }while(n);
    return 0;
}
