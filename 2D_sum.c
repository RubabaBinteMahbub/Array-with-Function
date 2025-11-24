#include<stdio.h>
void InputArray(int n,int arr[][n]){
     printf("Enter the elements :\n");
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
     }
}

void sum(int n,int arr1[][n],int arr2[][n],int add[][n]){
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++)
        add[i][j]=arr1[i][j]+arr2[i][j];
    }
}
void printArray(int n,int arr[][n]){
     printf("Print the elements : \n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
        }
     printf("\n");
    }
     
}
int main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size][size],b[size][size],c[size][size];
    InputArray(size,a);
    InputArray(size,b);
    sum(size,a,b,c);
    printArray(size,c);
    
return 0;
}
