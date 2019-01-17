//Program to count no. of occurrence of a given word within a given file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char ch,word[20]="",target[20];
    int count=0;
    FILE *fp=fopen("myFile.txt","r");
    if(fp==NULL){
        printf("Error in file\n");
        exit(1);
    }
    puts("Enter the checking word\n");
    gets(target);
    while((ch=fgetc(fp))!=EOF){
        if(ch!=' ' && ch!=',' && ch!='.'){
            strcat(word,(char[2]) { ch, '\0' });
            }
        else{
            if(strcmp(target,word)==0){
                count++;
            }
            strcpy(word,"");
        }
    }
    printf("%d",count);

    fclose(fp);
    return 0;
}
