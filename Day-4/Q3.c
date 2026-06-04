#include<stdio.h>
#include<math.h>
int main ()
{
    int n,n1,n2,c=0,r,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        n1=n1/10;
        c++;
    }
    n2=n;
    while(n2!=0)
    {
        r=n2%10;
        n2=n2/10;
        sum+=pow(r,c);
    }
    if(sum==n)
        printf("%d is a Armstrong Number",n);
    else
        printf("%d is not a Armstrong Nmber",n);
    return 0;
}