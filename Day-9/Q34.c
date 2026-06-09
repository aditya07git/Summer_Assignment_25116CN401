#include <stdio.h>
int main()
{
    int i,j;
    for(i=1 ;i<=5;i++)
    {
        int n=1;
        for(j=i;j<=5;j++)
        {
            printf("%d",n);
            n++;
        }
        
        printf("\n");
    }
    return 0;
}