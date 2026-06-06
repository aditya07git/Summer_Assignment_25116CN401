#include<stdio.h>
int main ()
{
    int n,r,bin=0,i=1;
    printf("enter the decimal number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        n/=2;
        bin+=r*i;
        i*=10;
    }
    printf("the binary number is %d",bin);
    return 0;
}