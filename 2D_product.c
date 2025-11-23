#include<stdio.h>
void array(int n,int arr[n][n]){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
        scanf("%d",&arr[row][col]);
        }
    }
}

int main(){
   int size,row,col,sum,i;
   printf("Enter size : ");
   scanf("%d",&size);

   int a[size][size],b[size][size],c[size][size];
   printf("\nEnter first matrix: \n");
   array(size,a);
   printf("\nEnter second matrix: \n");
   array(size,b);

   printf("Product :\n");
   for(row=0;row<size;row++){
      for(col=0;col<size;col++){
       c[row][col]=0;
       for(i=0;i<size;i++){
         c[row][col]+=a[row][i]*b[i][col];
       }
       printf(" %d",c[row][col]);
       }
       printf("\n");
   }

   return 0;
}
