#include<stdio.h>
int main ()
{
    int n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        c+=n%2;
        n/=2;
    }
    printf("the number of sets is %d",c);
    return 0;
}