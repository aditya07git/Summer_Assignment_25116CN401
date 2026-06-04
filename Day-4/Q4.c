#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,i,n1,n2,r;
    printf("Enter the no from where armstrong numbers to be printed:");
    scanf("%d",&a);
    printf("Enter the no upto which armstrong numbers to be printed:");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        int c=0,sum=0;
        n1=i;
        while(n1!=0)
        {
            n1=n1/10;
            c++;
        }
        n2=i;
        while(n2!=0)
        {
            r=n2%10;
            n2=n2/10;
            sum+=pow(r,c);
        }
        if(sum==i)
            printf("%d is a Armstrong Number \n",i);
    }
    return 0;
}