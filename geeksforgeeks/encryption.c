// Program to encrypt a given string by replacing a letter by the next letter in the alphabet

#include<stdio.h>
int main(){
  char str[100];
  int i;
  printf("Enter the input string\n");
  gets(str);
  for(i=0;str[i]!='\0';i++){
    if(str[i]==' ');
    else
        str[i]+=1;
  }
  printf("Encrypted string is: ");
  puts(str);
  return 0;

}
