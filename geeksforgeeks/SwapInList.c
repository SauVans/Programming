//Program for swapping first and last element in a given list.

#include<stdio.h>
#include<stdlib.h>
struct list{
 int data;
 struct list *next;
};
//function to insert values at the end of the list.
insert(struct list *start,int data){
    struct list *temp=(struct list *)malloc(sizeof(struct list));
    temp->data=data;
    temp->next=NULL;
    while(start->next!=NULL){
        start=start->next;
    }
    start->next=temp;
}

swap(struct list *start){
    struct list *temp=start;
    while(start->next!=NULL)
        start=start->next;
    temp->data=temp->data+start->data;
    start->data=temp->data-start->data;
    temp->data=temp->data-start->data;
}
void display(struct list *start){
    while(start!=NULL){
        printf("%d",start->data);
        start=start->next;
    }
}

int main(){
    struct list *start=(struct list *)malloc(sizeof(struct list));
    start->data=1;
    start->next=NULL;
    insert(start,2);
    insert(start,3);
    insert(start,4);
    insert(start,5);
    printf("List before swapping\n");
    display(start);
    swap(start);
    printf("\n");
    printf("List After swapping\n");
    display(start);
    return 0;
}
