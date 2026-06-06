#include<stdio.h>
int main ()
{
    int n,r,dec=0,i=1;
    printf("enter the binary number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n/=10;
        dec+=r*i;
        i*=2;
    }
    printf("the decimal number is %d",dec);
    return 0;
}