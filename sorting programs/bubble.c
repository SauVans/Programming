#include<stdio.h>
void main(){
    int i,j,totChanges=0,temp;
    int arr[]={5,4,6,5,1,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(j=0;j<size-1;j++){
        totChanges=0;
        for(i=0;i<size-1-j;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                totChanges++;
            }

        }
        if(totChanges==0){
            break;
        }
    }
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }




}
