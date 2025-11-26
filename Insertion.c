#include<stdio.h>
void insertion(int n,int a[],int pos,int num){
    int i;
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    printf("Updated array :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int a[size],pos,num;
    printf("Enter elements : ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position and number :");
    scanf("%d%d",&pos,&num);
    insertion(size,a,pos,num);
}
