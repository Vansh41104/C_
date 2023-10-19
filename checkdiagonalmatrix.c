#include<stdio.h>
int main(){
    int x,y;
    printf("enter the number of rows and columns needed\n");
    scanf("%d %d",&x,&y);
    int a[x][y];
    printf("entering the values");
    printf("\n");
    int i,j,flag;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("printing the numbers\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // printf("printing diagonal values\n");
    // for(i=0,j=0;i<x&&j<y;i++,j++){
    //     printf("%d\n\t",a[i][j]);
    // }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(i==j){
                if(a[i][j]==0){
                    flag=1;
                }
            }
            else if(a[i][j]!=0){
                flag=1;
            }
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(flag==1){
                printf("\nNO");
                break;
                
            }
            else{
                printf("\nYES");
                break;
            }
        }
    }
}