#include <iostream>
using namespace std;
void swap(int* ,int*);
void bubble_sort(int*,int);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"After sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}


void bubble_sort(int *ptr,int size){
    for (int i = 1;i<=size; i++)
    {   
        for (int j = 0; j < size-i; j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
                swap(ptr+j,ptr+j+1);
        }      
    }
    
}
void swap(int *ptr1, int *ptr2){
    int temp;
    temp =*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
