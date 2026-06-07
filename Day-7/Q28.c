#include<stdio.h>
int reverse(int m);
int main ()
{
    int n,rev;
    printf("Enter the number:");
    scanf("%d",&n);
    rev=reverse(n);
    printf("the reverse of number is %d",rev);
    return 0;
}
int reverse(int m)
{
    int rem,sum=0;
    while(m>0)
    {
        rem=m%10;
        sum=sum*10+rem;
        m=m/10;
    }
    
    return sum;
}