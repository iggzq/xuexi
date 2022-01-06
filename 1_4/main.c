#include <stdio.h>
#include <string.h>
/*
void move(char* o,int n,int len)
{
    int i,j;
    char u;
    for(j = 0; j < n; j++) {
        u = *o;
        for (i = 0; i < len - 1; i++) {
            *(o + i) = *(o + i + 1);
        }
        *(o + len - 1) = u;
    }
}
int main() {
    char o[] = "abcdef";
    int n;
    int len = strlen(o);
    printf("请输入旋转的个数：");
    scanf("%d",&n,len);
    move(o,n,len);
    return 0;
}

int is_left_str(char* o,char* u)
{
    int len1 = strlen(o);
    int len2 = strlen(u);
    if(len1 != len2)
    {
        return 0;
    }
    strncat(o,o,len1);
    char* p = strstr(o,u);
    if(p == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
main()
{
    char o[30] = "abcdef";
    char u[] = "cdefab";
    int num = is_left_str(o,u);
    if(num == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

Panduan(int p[3][3],int k,int* x,int* y)
{
    int px = 0;
    int py = *y-1;
    while(px <= *x - 1 && py >= 0)
    {
        if(p[px][py] < k)
        {
            px++;
        }
        else if(p[px][py]  > k)
        {
            py--;
        }
        else
        {
            *x = px;
            *y = py;
            return 1;
        }
    }
    return 0;
}
main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int k = 7;
    int x = 3;
    int y = 3;
    int num = Panduan(a,k,&x,&y);
    if(num == 0)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了,坐标为：%d %d\n",x,y);
    }
}

main()
{
    char o[] = {'1','2','3','4','5','6'};
    int len = strlen(o);
    printf("%d\n",len);
}
 */
//main()
//{
//    char o[] = "hello";
//    char u[] = "abcde";
//    int ret = strcmp(u,o);
//    printf("%d\n",ret);
//}
int my_strcmp(char* p1,char* p2)
{
    while(*p1 == *p2)
    {
        p1++;
        p2++;
    }
    if(*p1 == '\0')
        return 0;
    else
        return (*p1 - *p2);
}
main()
{
   char o[] = "aello";
   char u[] = "hello";
   int num = my_strcmp(o,u);
   if(num > 0)
   {
       printf("o>u\n");
   }else if(num < 0)
   {
       printf("o<u\n");
   }
   else
   {
       printf("o=u\n");
   }
}










