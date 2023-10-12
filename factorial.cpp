#include <iostream>
using namespace std;

int main()
{
    int n, sum=1;
    cout<<"Enter a number to find its factorial: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum=sum*i;
    }
    cout<<"The factorial of the given number is: "<<sum;
    return 0;
}