//set of number 
#include <stdio.h>
int main(){
    int n,bits,x=1;
    scanf("%d",&n);
    scanf("%d",&bits);
    x=1<<(bits-1);
    printf("%d",n|x);

}