#include <stdio.h>
int binary(int arr[],int size,int element){
     int low=0;
     int high=size-1;
     while(low<=high){
          int mid = (low + high) / 2;
          if (arr[mid]==element){
               return mid;
          }
          else if (arr[mid]<element){
               low=mid+1;
          }
          else {
               high=mid-1;
          }
     }
     return -1;
}
int main(){
     int arr[]={100,102,104,106,108,110};
     int element;
     printf("enter the value that you want to search\n");
     scanf("%d",&element);
     int size=sizeof(arr)/sizeof(arr[0]);
     int search=binary(arr,size,element);
     if (search!=-1){ 
          printf("the element %d found at position %d",element,search);
     }
     else {
          printf("there is no such element found in the array");
     }
return 0;
}
