#include<stdio.h>
int main ()
{
    int m,n,i,j,c=0;
    printf("Enter the Number from where prime numbers to be checked:");
    scanf("%d", &m);
    printf("Enter the Number upto which prime numbers to be checked:");
    scanf("%d", &n);
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==1)
            printf("%d is prime number\n ",i);
    }
    return 0;
}