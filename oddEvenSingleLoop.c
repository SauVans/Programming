#include<stdio.h>
void main(){
    int a=10,odd,even,i,j;
    if(a%2==0){
        even=a;
        odd=a-1;
    }
    else{
        odd=a;
        even=a-1;
    }
    for(i=odd,j=even;(i>=1)||(j>=1) ;i=i-2){
        if(i<1){
            printf("%d",j);
            j=j-2;
        }
        else
            printf("%d",i);
    }
}
