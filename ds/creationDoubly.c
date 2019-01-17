//Doubly Linked List creation and Reversing.

#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *prev;
 struct node *next;
};
struct node* reverse(struct node *start){
    struct node* temp,*head;
    while(start!=NULL){
        head=start;
        temp=start->next;
        start->next=start->prev;
        start->prev=temp;
        start=start->prev;

    }
    return head;

}
void creation(struct node *start){
    while(start->next!=NULL)
        start=start->next;
    printf("Enter the data \n");

    start->next=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&start->next->data);
    start->next->prev=start;
    start->next->next=NULL;
}
void display(struct node *start){
while(start!=NULL){
    printf("%d",start->data);
    start=start->next;
}
}
void main(){
    int i,n;
    struct node *start=(struct node *)malloc(sizeof(struct node));
    start->data=1;
    start->prev=NULL;

    start->next=NULL;
    printf("Enter the total no. of nodes in doubly linked list\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        creation(start);
    }
    display(start);
    start=reverse(start);
    printf("\nReversed Linked list: \n");
    display(start);


}
