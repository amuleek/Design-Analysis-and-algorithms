#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node
{
 int data;
 struct node *next;
};
struct node *head = NULL;
void insert_at_beginning(int num)
{
 struct node *t;
 t = (struct node*) malloc (sizeof(struct node));
 if(head == NULL)
 {
 head=t;
   head->data=num;
 head->next=NULL;
 count=1;
 }
 else
 {
 t->data=num;
 t->next=head;
 head=t;
 count++;
 }
}
void insert_at_end(int num)
{
 struct node *t,*temp;
 t = (struct node*) malloc (sizeof(struct node));
 if(head == NULL)
 {
 head=t;
 head->data=num;
 head->next=NULL;
 count=1;
 }
 else
 {
 temp=head;
 while(temp->next!=NULL)
 {
 temp=temp->next;
 }
 temp->next=t;
 t->data=num;
 t->next=NULL;
 count++;
 }
 }
void insert_in_middle(int num, int pos)
{
 int i=1;
 struct node *t,*node;
 if(pos>count || pos<1)
 {
 printf("Element can't be inserted at such position\n\n");
 }
 else
 {
 t = (struct node*) malloc (sizeof(struct node));
 node=head;
 while(i==pos)
 {
 node=node->next;
 i++;
 }
 node=node->next;
 t->data=num;
 t->next=node->next;
 node->next=t;
 }
}
void traverse()
{
 struct node *t;
 t=head;
 if(t==NULL)
 {
 printf("Linked List is Empty");
 }
 else
 {
 printf("Elements in Linked List are : ");
   while(t->next!=NULL)
 {
 printf("%d -> ",t->data);
 t=t->next;
 }
 printf("%d",t->data);
 }
}
void delete_from_beginning()
{
 struct node *t;
 if(head==NULL)
 {
 printf("Nothing to delete.\nLinked List is empty.");
 }
 else
 {
 printf("Deleted element is %d\n",head->data);
 t=head->next;
 free(head);
 head=t;
 count--;
 }
}
void delete_from_end()
{
 struct node *t,*end_node;
 if(head==NULL)
 {
 printf("Nothing to delete.\nLinked List is empty.");
 }
 else if(head->next==NULL)
 {
 printf("Deleted element is %d\n",head->data);
 free(head);
 head=NULL;
 count=0;
 }
 else
 {
 t=head;
 while(t->next!=NULL)
 {
 end_node=t;
 t=t->next;
 }
 printf("Deleted element is %d\n",t->data);
 end_node->next=NULL;
 free(t);
 count--;
 }
}
void delete_from_middle(int pos)
{
 int i=1;
 struct node *temp,*node;
 if(pos>count || pos<1)
 {
 printf("Element do not exist at such position\n\n");
 }
 else
 {
 node=head;
 while(i==pos)
 {
 node=node->next;
 i++;
 }
 node=node->next;
 temp=node->next;



