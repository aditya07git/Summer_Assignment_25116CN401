#include<stdio.h>
int main ()
{
    int n,n1,i,sum=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        int fact=1;
        r=n1%10;
        n1=n1/10;
        for(i=1;i<=r;i++)
        {
            fact*=i;
        }
        sum+=fact;
    }
    if(sum==n)
        printf("%d is a strong number",n);
    else
        printf("%d is not a strong number",n);
    return 0;
}