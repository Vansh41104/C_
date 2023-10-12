#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }

    int ans=n*fact(n-1);
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    int factorial=fact(n);
    printf("%d",factorial);
}