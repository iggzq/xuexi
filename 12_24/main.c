#include <stdio.h>
int ADD(int x,int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x - y;
}
int Mul(int x,int y)
{
    return  x*y;
}
int Div(int x,int y)
{
    return x/y;
}
void Print(int (*p)(int,int))
{
    int x;
    int y;
    scanf("%d%d",&x,&y);
    printf("%d \n",p(x,y));
}
int main() {
    int (*o[4])(int,int)={ADD, Sub, Mul, Div};
    int t;
    scanf("%d",&t);
    switch (t)
    {
        case 1:
            Print(o[0]);
            break;
        case 2:
            Print(o[1]);
            break;
        case 3:
            Print(o[2]);
            break;
        case 4:
            Print(o[3]);
            break;

    }

}