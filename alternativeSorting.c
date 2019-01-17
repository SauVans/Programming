//By using Bubble Sort in both ways(increasing & decreasing) alternatively....
#include<stdio.h>
void main(){
    int a[]={5,7,3,9,1,2,4,9,6,5};
    int i,j,temp;
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }



}
