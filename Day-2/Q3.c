#include<stdio.h>
int main ()
{
    int n,n1,i,r,pro=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        pro*=r;
    }
    printf("The product  of digits of %d is %d",n1,pro);
    return 0;
}