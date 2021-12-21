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
        printf("Ð¡¶Ë\n");
    }
    else
    {
        printf("´ó¶Ë\n");
    }
    return 0;
}