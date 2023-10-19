#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int Ra,Rb,fact=1,count,total=0,sum=0;
    scanf("%d %d",&Ra,&Rb);
    for(count=1;count<=10;count++){
        fact=fact*count;
        if(fact>=Ra&&fact<=Rb){
            total++;
            sum=sum+fact;
        }
        else{
            continue;
        }
        
    }
    printf("total=%d\n",total);
    printf("sum=%d\n\n",sum);
    }
    
}