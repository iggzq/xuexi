#include <stdio.h>
#include <string>
/*
int main()
{
    char *a[] = {"work","at","alibaba"};
    char**pa = a;
    pa++;
    printf("%s\n", *pa);
    return 0;
}
*/
/*
int main()
{
    char *c[] = {"ENTER","NEW","POINT","FIRST"};
    char**cp[] = {c+3,c+2,c+1,c};
    char***cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp+3);
    printf("%s\n", *cpp[-2]+3);
    printf("%s\n", cpp[-1][-1]+1);
    return 0;
}
喝汽水一瓶一元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int main()
{
    int money = 0;
    int num = 0;
    int sum = 0;
    scanf("%d",&money);
    while(money)
    {
        money--;
        num++;
        sum++;
        if(num == 2)
        {
            sum++;
            num = 1;
        }
    }
    printf("%d\n",sum);
}
*/
//调整数组使奇数全位于偶数前面

int main()
{
    int o[]={2,4,6,8,10,1,3,5,7};
    int i = 0;
    int j = 0;
    int t;
    int len = sizeof(o)/sizeof(o[0]);
    for(i = 0; i < len; i++)
    {
        if(o[i] % 2 != 0)
        {
            t = o[j];
            o[j] = o[i];
            o[i] = t;
            j++;
        }
    }
    for(i = 0; i < len; i++)
    {
        printf("%d ",o[i]);
    }
}

/*
void swap(int o[],int len)
{
    int left = 0;
    int right = len - 1;
    while(left<right)
    {
        while((left<right)&&(o[left] % 2 == 1))
        {
            left++;
        }
        while((left<right)&&(o[right] % 2 == 0 ))
        {
            right--;
        }
        if(left < right)
        {
            int tmp = o[left];
            o[left] = o[right];
            o[right] = tmp;
        }
    }
}
void Printf(int o[],int len)
{
    int i = 0;
    for(i = 0; i < len; i++)
    {
        printf("%d ",o[i]);
    }
}

int main()
{
    int o[10] = {1,3,5,7,9,2,4,6,8,10};
    int len = sizeof (o)/sizeof (o[0]);
    swap(o,len);
    Printf(o,len);
}
*/