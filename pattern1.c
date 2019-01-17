#include<stdio.h>
void main(){
    int row=7,col=8,track=7;
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if((j<=i) || (j>=track))
                printf("*");
            else
                printf(" ");

        }
        track--;
        printf("\n");
    }

}
