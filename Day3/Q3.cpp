/*
Write a function “delete_end()” for deleting a node from the end of the linked list.
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

//TO DELETE NODE FROM LAST/RIGHT
void del_end()  
    {  
        struct node *ptr,*ptr1;  
        
            ptr = head;   
            while(ptr->next != NULL)  
                {  
                    ptr1 = ptr;  
                    ptr = ptr ->next;  
                }  
                ptr1->next = NULL;
                   
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
	del_end();
	del_end();
	cout<<"\n\nafter deletion:  "; 
	display();
	return 0;
}
