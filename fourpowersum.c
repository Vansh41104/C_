#include<stdio.h>
int main(){
    int a,sum=0,i;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        int b=i*i*i*i;
        sum=sum+b;
    }

printf(" sum is %d",sum);
}