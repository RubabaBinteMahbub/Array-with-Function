#include<stdio.h>
int array(int n,int arr[n][n]){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
        scanf("%d",&arr[row][col]);
        }
    }
    return arr[n][n];
}

int main(){
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
   int a[size][size],b[size][size];
   printf("\nEnter first matrix: \n");
   array(size,a);
   printf("\nEnter second matrix: \n");
   array(size,b);
 
    
  return 0;
}
