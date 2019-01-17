//Program for reverse a given string....

#include<stdio.h>
void main(){
    int i;
    char s[]="saurabh";
    char temp,var;
    int size=(sizeof(s)/sizeof(s[0]))-1;
    for(i=0;i<(size/2);i++){
            //var=size-i-1;
            printf("%d\n",var);

            temp=s[i];
            s[i]=s[var];
            s[var]=temp;


    }
    printf("%s",s);

}
