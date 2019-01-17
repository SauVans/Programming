#include<stdio.h>
void main(){
    int i,j,temp;
    int arr[6]={6,5,4,3,2,1};
    for(i=1;i<6;i++){
        k=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j-- ){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;


    }
    for(i=0;i<6;i++){
        printf("%d",arr[i]);
    }
}
