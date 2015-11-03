#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};

void traverse_list(struct node* ptr)
{
    for(;ptr!=NULL;ptr=ptr->link)  printf("%d\t",ptr->data);
}

int main()
{
struct node* head=(struct node*)malloc(sizeof(struct node));
struct node* second=(struct node*)malloc(sizeof(struct node));
struct node* third=(struct node*)malloc(sizeof(struct node));

head->data=2;
head->link=second;

second->data=4;
second->link=third;

third->data=67;
third->link=NULL;

traverse_list(head);
return 0;
}