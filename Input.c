#include<stdio.h>
void print_array(int size, int arr[]){
   printf("Enter %d elements :",size);
   for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
   }
}
int main(){
   int size;
   printf("Enter the size : ");
   scanf("%d",&size);
   int a[size];
   
   print_array(size,a); 
   // ও বুঝে গেছে এটা অ্যারে।
   
   return 0;
}
