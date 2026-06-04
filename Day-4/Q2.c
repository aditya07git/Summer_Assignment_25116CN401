#include<stdio.h>
int main ()
{
    int a=0,b=1,c,n,i;
    printf("Enter the no to find that term:");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n %d",c);
    return 0;
}