#include <stdio.h>
int main()
{
    int arr[50], n, low=0, mid, high, i, ele;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &ele);
    low=0;
    high=n-1;
    mid=(low+high)/2;

    while(low<=high)
    {
        if(arr[mid]<ele)
        {
            low=mid+1;
            mid = (low + high)/2;
        }
        else if(arr[mid]==ele)
        {
            printf("Element %d found at %d", ele, arr[mid]);
            break;
        }
        else
        {
            high=mid-1;
            mid=(low+high)/2;
        }
    }
    if(low>high)
    {
        printf("Element %d not found!", ele);
    }
    return 0;
}