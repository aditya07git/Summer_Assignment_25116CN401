#include<stdio.h>
int main ()
{
    int x,y,max,i,lcm;
    printf("Enter the First no:");
    scanf("%d",&x);
    printf("Enter the Second no:");
    scanf("%d",&y);
    max=(x>y)?x:y;
    while(max%x!=0 || max%y!=0)
    {
        
        max++;
        
    }
    lcm=max;
    printf("The LCM of %d and %d is %d",x,y,lcm);
    return 0;
}