#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct stu
{
    char name[10];
    int age;
};
/*
Printf_int(int* a,int len)
{
    int i;
    for( i = 0; i < len;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
}
Printf_float(float (*a)[10],int len)
{
    int i;
    for( i = 0; i < len;i++)
    {
        printf("%fl ",(*a)[i]);
    }
    printf("\n");
}
*/
int cmp_int(const void* e1,const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
/*
int cmp_float(const void* e1,const void* e2)
{
    if(*(float*)e1 - *(float*)e2 == 0)
    {
        return 0;
    } else if(*(float*)e1 - *(float*)e2 > 0)
    {
        return 1;
    } else{
        return -1;
    }
}
int cmp_age(const void* e1,const void* e2)
{
    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int comp_name(const void* e1,const void* e2)
{
    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
cmp_char(const void* e1,const void* e2)
{
    return *(char*)e1 - *(char*)e2;
}
cmp1()
{
    int o[10] = {9,8,7,6,5,4,3,2,1,0};
    int len = sizeof(o)/sizeof(o[0]);
    qsort(o,len,sizeof(o[0]),cmp_int);
    Printf_int(o,len);
}

cmp2()
{
    float o[10] = { 0.00, 1.00, 2.00, 3.50, 3.60, 0.10, 4.00, 6.00, 5.00,9.00};
    int len = sizeof(o)/sizeof(o[0]);
    qsort(o,len,sizeof(o[0]),cmp_float);
    Printf_float(o,len);
}
cmp3()
{
    struct stu o[3] = {{"xiaoming",18},{"xiaohua",20},{"zhangsan",19}};
    int len = sizeof(o)/sizeof(o[0]);
    qsort(o,len,sizeof(o[0]),cmp_age);
}
cmp4()
{
    struct stu o[3] = {{"xiaoming",18},{"zhangsan",20},{"xiaohua",19}};
    int len = sizeof(o)/sizeof(o[0]);
    qsort(o,len,sizeof(o[0]),comp_name);
}
cmp5()
{
    char o[2]="ba";
    int len = sizeof (o)/sizeof (o[0]);
    qsort(o,len,sizeof (o[0]),cmp_char);
}
*/
swap(char* e1,char* e2,int width)
{
    int i = 0;
    for(i = 0; i<width; i++)
    {
        char tmp = *e1;
        *e1 = *e2;
        *e2 = tmp;
        e1++;
        e2++;
    }
}
my_bubble_sort(void* o,int len,int width,int(*cmp)(void* e1,void* e2))
{
    int i,j;
    for(i = 0; i < len-1; i++)
    {
        for(j = 0; j < len-1-i;j++)
        {
            if(cmp((char*)o+j*width,(char*)o+(j+1)*width)>0)
            {
                swap((char*)o+j*width,(char*)o+(j+1)*width,width);
            }
        }
    }
}

cmp6()
{
    int o[10] = {20,19,18,17,16,15,14,13,12,11};
    int len = sizeof (o)/sizeof (o[0]);
    my_bubble_sort(o,len,sizeof(o[0]),cmp_int);
    for(int i = 0; i < len;i++)
    {
        printf("%d ",o[i]);
    }
    printf("\n");
}
int main() {
    /*cmp1();
    cmp2();
    cmp3();
    cmp4();
    cmp5();*/
    cmp6();
    return 0;
}
