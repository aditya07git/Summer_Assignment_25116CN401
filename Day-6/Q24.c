#include<stdio.h>
int main ()
{
    int x,n,i,result=1;
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the power:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result*=x;
    }
    printf("%d^%d=%d",x,n,result);
    return 0;
}