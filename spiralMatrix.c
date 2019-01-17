#include<stdio.h>
void main(){
    int i,j,a[6][6];
    printf("Please Enter the 2*2 matrix\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++)
            a[i][j]=(6*i)+j+1;

    }
    printf("Entered Matrix is:\n");
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(a[i][j]<=9){
                printf("0");
                printf("%d ",a[i][j]);
            }
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
