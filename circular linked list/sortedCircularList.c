//split a circular linked list in two halves;

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
struct node * findMid(struct node *last){
    struct node *fast=last->next;
    struct node *slow=last->next;
    while(fast->next!=last->next && fast->next->next!=last->next)
    {
        fast=fast->next->next;
        slow=slow->next;

    }
    return slow;
}
void spilitList(struct node **list1,struct node **list2, struct node *mid, struct node *last){
    struct node *temp=mid->next;
    mid->next=last->next;
    *list1=mid;
    //list1->next=last->next;
    last->next=temp;
    *list2=last;
}

void main(){
    struct node *mid=NULL;
    struct node **list1=NULL;
    struct node **list2=NULL;
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
    printf("The original list is: \n");
    display(last);
    mid=findMid(last);
    printf("\nThe middle node value is: %d\n",mid->data);

    spilitList(&list1,&list2,mid,last);
    printf("The first list is: \n");
    display(list1);
    printf("\nThe Second list is: \n");
    display(list2);



}
