#include "contact.c"
void menu() {
    printf("***************************************\n");
    printf("***************************************\n");
    printf("******   1. add       2. delete  ******\n");
    printf("******   3. search    4. modify  ******\n");
    printf("******   5. show      6. sort    ******\n");
    printf("******   0. exit                 ******\n");
    printf("***************************************\n");
    printf("***************************************\n");
}
int main() {
    int n = 0;
    struct Contact con;
    InitContact(&con);
    do {
        menu();
        printf("please input your choice:");
        scanf("%d", &n);
            switch (n) {
                case 1:
                    AddContact(&con);
                    break;
                case 2:
                    ShowContact(&con);
                    DelContact(&con);
                    break;
                case 3:
                    SearchContact(&con);
                    break;
                case 4:
                    MdFiContact(&con);
                    break;
                case 5:
                    ShowContact(&con);
                    break;
                case 6:
                    SortContact(&con);
                    break;
                case 0:
                    printf("退出通讯录\n");
                    break;
                default:
                    printf("输入错误，请重新输入\n");
                    break;
            }
        }while (n);
    return 0;
}
