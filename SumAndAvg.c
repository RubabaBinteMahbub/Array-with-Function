#include<stdio.h>
int array(int n,int a[]){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return a[n];
}
void sum_and_avg(int n,int a[]){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
printf("Sum = %d",sum);
printf("\nAverage = %.2f",sum/ (float)n);
}
int main(){
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter %d elements : \n");
    array(size,arr);
    sum_and_avg(size,arr);
    return 0;
}
