#include<stdio.h>
void main(){
    int row,i,j;
    printf("Enter the no of rows\n");
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",row+1-i);
        }
        printf("\n");
    }
}
