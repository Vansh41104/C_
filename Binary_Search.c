#include<stdio.h>
int binary_search(int *a[],int beg, int end, int x, int n)
{
    int mid;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            beg=mid+1;
        }
        else if(a[mid]>x)
        {
            end=mid-1;
        }
        else
        return -1;
    }
}
int main()
{
    int n;
    printf("Enter size of array :- ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int result=binary_search(a,0,n-1,x,n);
    (result==-1)?printf("Element is not present in array"):printf("Element is present at %d location",result+1);
}