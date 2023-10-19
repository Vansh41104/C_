#include<stdio.h>
int main(){
    int a;
    printf("ENTER THE AMOUNT \n");
    scanf("%d",&a);
    int hundred=a/100;
    int total=a-(a/100)*100;
    int fifty=total/50;
    printf("%d notes of 100\n",hundred);
    printf("%d notes of 50\n",fifty);
    


}
