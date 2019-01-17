//Program to find largest difference in a given array.

#include<stdio.h>
void main(){
    int size,min,max,i;
    int a[]={5,3,4,5,6,10};
    size=sizeof(a)/sizeof(a[0]);
    min=a[0];max=a[0];

    for(i=1;i<size;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        }
    printf("%d",max-min);
}
