#include<stdio.h>
int sumofdigits(int m);
int main ()
{
    int n,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=sumofdigits(n);
    printf("the sum of digits of %d is %d",n,sum);
    return 0;
}
int sumofdigits(int m)
{
    if(m==0)
        return 0;
    else
        return ((m%10)+sumofdigits(m/10));
}