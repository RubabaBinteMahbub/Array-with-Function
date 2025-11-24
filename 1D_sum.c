#include<stdio.h>
void array(int n,int arr[]){
     printf("Enter the elements : ");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
}
void sum(int n,int arr[]){
     int sum=0;
     for(int i=0;i<n;i++){
      sum+=arr[i];
     }
    printf("Sum = %d",sum);
}
int main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    array(size,a);
    sum(size,a);
return 0;
}
