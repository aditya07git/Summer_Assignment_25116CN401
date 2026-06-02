#include<stdio.h>
int main ()
{
    int n,i,c=0;
    printf("Enter the Number:");
    scanf("%d", &n);
    while(n!=0)
    {
        n=n/10;
        c+=i;
    }
    printf("The number of digits in %d is %d", n,c);
    return 0;
}