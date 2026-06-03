#include<stdio.h>
int main ()
{
    int n,i,c=0;
    printf("Enter the Number:");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==1)
        printf("The given number is prime number ");
    else
        printf("The given number is not prime number ");
    return 0;
}