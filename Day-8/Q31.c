#include <stdio.h>
int main()
{
    int i,j;
    for(i=1 ;i<=5;i++)
    {
        int n=65 ;
        for(j=1;j<=i;j++)
        {
            printf("%c",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}