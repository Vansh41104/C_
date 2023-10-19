#include<stdio.h>
int main(){
    int data[5];
    printf("ENTER ELEMENT:");
    for(int i=0;i<5;++i){
        scanf("%d",data+ i);
    }

    printf("YOU ENTERED ELEMENT:");
    for(int i=0;i<5;++i){
        printf("%d\n",*(data+ i));
    }

}