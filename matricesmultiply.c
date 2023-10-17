#include<stdio.h>
int main(){
    int a[3][3],b[3][3],i,j,k,result[3][3],sum=0;
    printf("ENTER THE DETAILS FOR MATRIX 1 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER NUMBER OF MATRIX 1 OF ELEMENT [%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE DETAILS FOR 2 MATRIX \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER NUMBER OF MATRIX 2 OF ELEMENT [%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
}
printf("THE MULTIPLICATION OF TWO MATRICES IS \n");
   for(i=0;i<3;i++)
   {
   	  for(j=0;j<3;j++)
		 {
		 	for(k=0;k<3;k++)
			 {
			 	sum+= a[i][k]*b[k][j];
		 		
			 }
			 result[i][j]=sum;
			 sum=0;
   	  	
		 }
   }
   // printing the resultant matrix
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
	   {
	   	printf("%d  ",result[i][j]);
	   	
		
	   }
	   printf("\n\n");
   }
    
    return 0;
    
    }