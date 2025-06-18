#include <stdio.h>
int linear(int arr[],int size,int element){
     for (int i=0;i<size;i++){
          if (arr[i]==element){
               return i;
          }
          else{
               return -1;
          }
     }
};
int main(){
     int arr[]={1,2,3,6,9,8,7};
     int element;
     printf("enter the value that you want to search\n");
     scanf("%d",&element);
     int size=sizeof(arr)/sizeof(arr[0]);
     int search=linear(arr,size,element);
     printf("the element %d found at position %d",element,search);
return 0;
}
