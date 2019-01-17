#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *left;
    int data;
    struct node *right;

};
void display(struct node *root){
 if(root==NULL)
    return;
 printf("%d ",root->data);
 display(root->left);
 display(root->right);

}
void insert(struct node *root,int data){
    //printf("%d",data);
 struct node *temp,*par;
 temp=(struct node *)malloc(sizeof(struct node));
 temp->left=NULL;
 temp->right=NULL;
 temp->data=data;
 while(root!=NULL){
    par=root;
    if(root->data>data)
        root=root->left;
    else if(root->data<data)
        root=root->right;
    else{
        printf("Duplicate data\n");
        return;
    }}
 if(par->data<data){
    par->right=temp;
    printf("left inserted\n");
    }
 else
    {par->left=temp;
    printf("right inserted\n");};
 }



void main(){
    int data,n,i;
    struct node *root,*temp;
    printf("Enter the no. of nodes\n");
    scanf("%d",&n);
    if(n>=1){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->left=NULL;
        temp->right=NULL;
        printf("Enter the root element's data\n");
        scanf("%d",&temp->data);
        root=temp;
        }
    for(i=2;i<=n;i++){
        printf("Enter the %dth node value",i);
        scanf("%d",&data);
        insert(root,data);
        }
    display(root);
}
