#include<stdio.h>
void main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8};
    int c[9];
    int i;
    merge(a,b,c,5,4);
    for(i=0;i<9;i++)
        printf("%d",c[i]);
}

void merge(int a[], int b[], int c[],int firstLength,int secLength){
    int i=0,j=0,k=0;
    while(i<firstLength && j<secLength){
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<=firstLength)
        c[k++]=a[i++];
    while(j<=secLength)
        c[k++]=b[j++];
}
