#include "game.h"
void game()
{
    char mine[ROWS][COLS]={ 0 };
    char show[ROWS][COLS]={ 0 };
    printf("����Ϸ���ס��á�1����ʾ��\n");
    //��ʼ������
    InitBoard1(mine,ROWS,COLS,'0');
    InitBoard2(show,ROWS,COLS,'*');
    //չʾ����
    DisplayBoard(show,ROW,COL);
    //������
    InputBoom(mine,ROW,COL);
    //�������Ϸ
    PlayBoard(mine,show,ROW,COL);
}
void menu()
{
    printf("��ӭ��������ɨ����Ϸ��\n");
    printf("********************\n");
    printf("*******1. play******\n");
    printf("*******0. exit******\n");
    printf("********************\n");
}
void test()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do {
        menu();
        printf("��ѡ��");
        scanf("%d",&input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("�˳���Ϸ��\n");
                break;
            default:
                printf("�Ƿ��ַ������������롣\n");
                break;
        }
    }while(input);
}
int main() {
    test();
    return 0;
}
