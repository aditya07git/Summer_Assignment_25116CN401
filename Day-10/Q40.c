#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("enter the umber of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int a=65;
        for(k=1;k<=i;k++)
        {
            printf("%c",a);
            a++;
        }
        int b=a-2;
        for(l=1;l<i;l++)
        {
            printf("%c",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}