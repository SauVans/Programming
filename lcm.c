#include<stdio.h>
void main(){
    int a,b,x,y;
    printf("Enter the two numbers\n");
    scanf("%d%d",&x,&y);
    a=x,b=y;
    while(a!=b){
        if(a<b)
            a+=x;
        else
            b+=y;
    }
    printf("LCM is %d\n",a);
    a=x;b=y;
    while(a!=b){
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    printf("HCF is %d\n",a);

}
