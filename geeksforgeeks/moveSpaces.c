// Program to move all spaces to front of a given string.

#include<stdio.h>
void main(){
    int i,count,n;
    char s[]="Saurabh Verma is the great";
    n=sizeof(s)/sizeof(s[0]);count=n;
    for(i=n;i>=0;i--){
        if(s[i]!=' ')
            s[count--]=s[i];
    }
    while(count>=0)
        s[count--]=' ';
    printf("%s",s);

}

