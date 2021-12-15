#include<stdio.h>
int Digitsum(int n)
{
    if(n!=0)
    {
        return (n%10)+Digitsum(n/10);
    }
}
main()
{
    int n;
    scanf("%d",&n);//1234 4 123 3 12 2
    int sum = Digitsum(n);
    printf("%d \n",sum);
    return 0;
}