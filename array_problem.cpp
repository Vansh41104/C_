#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x ,check = 0,j;
    cin>>x;
    for (int i = 0; i < n; i++)
    {   
        j=0;
        if(a[i]+a[j]==x && i!=j)
            check=1;
        j++;
        if(a[i]+a[j]==x && i!=j)
            check=1;
        j++;
        if(a[i]+a[j]==x && i!=j)
            check=1;
        j++;
        if(a[i]+a[j]==x && i!=j)
            check=1;
        j++;
        if(a[i]+a[j]==x && i!=j)
            check=1;
        j++;
        if(a[i]+a[j]==x && i!=j)
            check=1;
        j++;
        if(a[i]+a[j]==x && i!=j)
            check=1;

    }
    if(check)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}