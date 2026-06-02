#include<stdio.h>
int main ()
{
    int n,n1,i,r,rev=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("The Reverse of %d is %d",n1,rev);
    return 0;
}