#include<stdio.h>

int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;

    }
    return rev;


}

int isPalindrome(int n){
    if(n==reverse(n))
        return 1;
    else
        return 0;

}
void main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(ifPalindrome){
        printf("number is palindrome\n");
    }
    else
        printf("number is not a palindrome\n");
    return;
}
