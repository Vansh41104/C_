#include<stdio.h>
int main(){
    int a,b,count=0,sum=0;
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        int f=0;
        for (int j = 2; j <= i/2; j++)
        {
            if((i%j)==0){
                f=1;
                break;
            }
        }
        if(f==0){
            sum=sum+i;
            count++;
        }       
    }
    printf("count=%d sum=%d",count,sum);
}