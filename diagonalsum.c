#include<stdio.h>
int main(){
    int x,y;
    printf("enter the number of rows and columns needed\n");
    scanf("%d %d",&x,&y);
    int a[x][y];
    printf("entering the values");
    printf("\n");
    int i,j;
    int sum=0;
    printf("scanning\n");
    for(i=0,j=0;i<x&&j<y;i++,j++){
        scanf("%d",&a[i][j]);
        sum=sum+a[i][j];
    
    }
    printf("printing\n");
    for(i=0,j=0;i<x&&j<y;i++,j++){
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\nsum = %d",sum);
}
