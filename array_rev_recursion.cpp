#include <iostream>
#include<stdlib.h>
using namespace std;
void rev(int*,int*);

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    rev(arr,&arr[9]);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<"\t";
    }
}

void rev(int* x,int* y){
    if(x==y || x==y+1 ){
        // cout<<"yo";
        return;
    }
    else{
        // cout<<"no ";
        int temp = *x;
        *x=*y;
        *y = temp;
        rev(++x,--y);
    }
}