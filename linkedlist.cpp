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

