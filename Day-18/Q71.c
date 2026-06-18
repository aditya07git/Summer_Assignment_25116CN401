#include<stdio.h>
int main ()
{
    int a[100],n,i,beg,mid,end,elem;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    printf("The elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&elem);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=elem)
    {
        if(elem>a[mid])
            beg=mid+1;
        else
            end=mid-1;
        mid=(beg+end)/2;
    }
    if(a[mid]==elem)
        printf("Element found at %d location",mid);
    else
        printf("element does not found");
    return 0;
}