#include<stdio.h>
Panduan()
{
    int a = 1;
    return *(char*)&a;
}
main()
{
    int a = Panduan();
    if(a == 1)
    {
        printf("С��\n");
    }
    else
    {
        printf("���\n");
    }
    return 0;
}