//circular linked list creation;
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void display(struct node *last){
    struct node *temp=last->next;
    do{
        printf("%d",temp->data);
        temp=temp->next;
    }while(temp!=last->next);

}
struct node *addAtEnd(struct node *last,int data)
{
    struct node *temp=last->next;
    last->next=(struct node *)malloc(sizeof(struct node));
    last->next->data=data;
    last->next->next=temp;
    return last->next;

}
addAtBeg(struct node *last, int data){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->next=last->next;
    last->next=temp;
    temp->data=data;


}
void main(){
struct node *last=(struct node *)malloc(sizeof(struct node));
printf("Enter the first element\n");
scanf("%d",&last->data);
last->next=last;
last=addAtEnd(last,6);
last=addAtEnd(last,7);
addAtBeg(last,4);
addAtBeg(last,3);
addAtBeg(last,2);
addAtBeg(last,1);
display(last);


}
