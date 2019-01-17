#include<stdio.h>
void main(){
    int i,j,min,temp;
    int arr[6]={5,9,3,4,6,7};
    for( i=0;i<5;i++){
        min=i;
        for(j=i+1;j<6;j++){
            if(arr[min]>arr[j])
                min=j;
        }
        if(i!=min){
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    printf("sorted array is: ");
    for(i=0;i<6;i++){
        printf("%d",arr[i]);
    }
}
