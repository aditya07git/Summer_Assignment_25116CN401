#include<stdio.h>
int main ()
{
    int n,i,lar;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(n%2==0)
    {
        lar=2;
        n/=2;
    }
    for(i=3;i<=n;i+=2)
    {
        while(n%i==0)
        {
            lar=i;
            n/=i;
        }
    }
    if(n>2)
        lar=n;
    printf("Largest prime factor is %d",lar);
    return 0;
}