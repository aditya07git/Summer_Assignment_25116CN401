#include<stdio.h>
int main ()
{
    int n,n1,i,r,sum=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("The sum of digits of %d is %d",n1,sum);
    return 0;
}