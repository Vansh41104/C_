#include<stdio.h>
int main(){
int arr[3][3];
int i,j,flag=0;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        if(i==j||i==j+1||j==i+1){
            if(arr[i][j]==0){
                flag=1;
            }}
        else if(arr[i][j]==0){
            flag=1;}
    }
}
if(flag){
    printf("YES");}
else{
    printf("NO");}}