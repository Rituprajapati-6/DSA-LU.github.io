/*
Question 1:
Write a function “insert_any()” for inserting a node at any given position of the linked list. Assume
position starts at 0.
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

//TO ADD ON NODES IN LINKED LIST
void createList(int n)
{
	struct node *newNode =(struct node *)malloc(sizeof(struct node));
	newNode->data=n;
	newNode->next=head;
	head=newNode;
}

//TO INSERT A NODE AT SPECIFIC POSITION
void insert_any(int item,int location)
{
	temp=(node*)malloc(sizeof(node));
	temp->data=item;
	node* current=head;
	int count=0;
	while (count <location-1)
	    {current=current->next;
	     count=count+1;
	    }
	temp->next=current->next;
	current->next=temp;
}
      
//TO DISPLAY THE LINKED LIST
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
	insert_any(100,2);
	cout<<"\n\nafter changes:  "; 
	display();
	return 0;
}
