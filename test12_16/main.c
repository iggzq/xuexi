#include <stdio.h>

/*int main() {
    int i = 0;
    int j = 0;
    for(i = 1; i<=7; i=i+2)
    {
        for(j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 5; i>=1; i = i - 2)
    {
        for(j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*main()
{
    int n;
    int m;
    int i = 0;
    int j = 0;
    int o = 0;
    scanf("%d",&n);
    for(i = 2; i<n; i++)
    {
        m = n - i;
        for(j = 2; j<m; j++)
        {
            if(m%j!=0)
            {
                o = 1;
            }
            else
            {
                o = 2;
                break;
            }
        }
        if(o == 1&&i % j!=0)
        {
            printf("%d = %d + %d\n",n,m,i);
            break;
        }
    }
    return 0;
}*/
/*main()
{
    int i = 0;
    int j = 0;
    for(i = 1; i<=9; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("%d*%d=%d ",j,i,i*j);
        }
        printf("\n");
    }
}*/
/*main()
{
    double x = 0.1;
    double s = 0;
    double i = 1;
    double m = 1;
    //scanf("%lf",&x);
    while(x/m >0.00001)
    {
        m = m * i;
        s = s + x/m;
        x = x*x;
        i++;
    }
    printf("%lf",s);
}*/






























