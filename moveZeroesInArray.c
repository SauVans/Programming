//Program to shift all zeroes at the end of the given array
/*
Algo:

1. take two integers i=0 & j=0;
2. iterate the array through i
  if (a[i]!=0)
    swap a[i] & a[j];
    increment j;

*/
#include<stdio.h>
void main(){
    int arr[]={0,5,6,0,7,0,2,3,4,0};
    int j=0,i=0,temp,maxIndex;
    maxIndex=(sizeof(arr)/sizeof(arr[0]));
    printf("%d\n",maxIndex);
    for(i=0;i<maxIndex;i++){
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j++]=temp;
        }

    }
    for(i=0;i<maxIndex;i++){
        printf("%d",arr[i]);
    }


}
