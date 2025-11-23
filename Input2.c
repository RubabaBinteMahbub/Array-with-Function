#include<stdio.h>
int array(int n,int arr[]){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return arr[n]; // উপরে [] এ n না দিলেও   হয়। কিন্তু এখানে দিতে হবে। 
}
int main(){
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter %d elements : \n");
    array(size,a);
    
    return 0;
}
