#include "Contact.c"
//结构体的创建
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
        printf("请输入你的选择：");
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
                printf("结束程序\n");
                break;
            default:
                printf("输入错误请重新输入.\n");
        }
    }while(n);
    return 0;
}
