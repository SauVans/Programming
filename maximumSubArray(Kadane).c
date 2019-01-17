
// program to find maximum subarray (Kadane algo);
#include<stdio.h>
void main(){
    int local_Max=0,final_Max=0,i;
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        local_Max=local_Max+arr[i];
        if(local_Max<0)
            local_Max=0;
        if(final_Max<local_Max)
            final_Max=local_Max;
    }
    printf("%d",final_Max);

}


