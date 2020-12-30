/*
Write a function “delete_beg()” for deleting a node from the beginning of the linked list.
*/

#include <iostream>
#include<malloc.h>
using namespace std;

struct node
{
	int data;
	struct node *next;

};
struct node *head= NULL;
struct node *temp;

//TO ADD ON NODES
void createList(int n)
{
	struct node *newNode =(struct node *)malloc(sizeof(struct node));
	newNode->data=n;
	newNode->next=head;
	head=newNode;
}

//TO DELETE THE FIRST NODE
void del_beg ()
{
	struct node*temp = head;
	temp = temp->next;
	head = temp;
}

//TO DIPLAY THE ELEMENTS OF THE LINKED LIST
void display()
{
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<< ptr->data<<"   ";
		ptr=ptr->next;
	}
}
int main()
{
	createList(2);
	createList(3);
	createList(5);
	createList(6);
	createList(7);
	createList(8);
	createList(9);
	createList(10);
	cout<<"\noriginal list: ";
	display();
	del_beg();
	del_beg();
	cout<<"\n\nafter deletion:  "; 
	display();
	return 0;
}
