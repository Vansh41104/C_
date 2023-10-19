#include<stdio.h>
int main(){
int arr[3][3];
int i,j,l=0,u=0;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        if((i>j)&&arr[i][j]!=0){
            l=1;}
        else if((j>i)&&arr[i][j]!=0){
            u=1;}}}
if(l==0||u==0){
    printf("YES");}
else{
    printf("NO");}}