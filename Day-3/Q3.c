#include<stdio.h>
int main ()
{
    int x,y,max,i,gcd;
    printf("Enter the First no:");
    scanf("%d",&x);
    printf("Enter the Second no:");
    scanf("%d",&y);
    max=(x>y)?x:y;
    for(i=1;i<max;i++)
    {
        if(x%i==0&&y%i==0)
            gcd=i;
    }
    printf("The GCD of %d and %d is %d",x,y,gcd);
    return 0;
}