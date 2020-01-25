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
