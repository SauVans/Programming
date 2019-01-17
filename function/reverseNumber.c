#include<stdio.h>
void main(){
    int n,rev=0,q;
    printf("Enter the numer\n");
    scanf("%d",&n);
    while(n>0){
        q=n%10;
        rev=rev*10+q;
        n/=10;
    }
    printf("%d",rev);

}
