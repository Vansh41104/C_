#include <stdio.h>
int main()
{
    int arr[100],a,i,j;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    printf("Enter the values in the array: \n");
    for(i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int n;
    int c=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]+arr[j]==n)
            {
                c=1;
                break;
            }
            
            else
            {
                c=0;
             
            }
            
        }
    }
    if(c==1)
    {
        printf("YES! ");
    }
    if(c==0)
    {
        printf("NO! ");
    }
}
