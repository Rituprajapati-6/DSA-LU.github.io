/*
Write a program implementing insert, delete and display operation of Circular Queue.
*/

#include<iostream>
using namespace std; 
#define MAX_SIZE 101 

int arr[MAX_SIZE];
int front, rear;

bool IsEmpty()	{
		return (front == -1 && rear == -1); 
	}
bool IsFull()	{
		return (rear+1)%MAX_SIZE == front ? true : false;
	}
	
void Enqueue(int x)	{
		cout<<"Enqueuing "<<x<<" \n";
		if(IsFull())  {
			cout<<"Error: Queue is Full\n";
			return;
		}
		if (IsEmpty())	{ 
			front = rear = 0; 
		}
		else	{
		    rear = (rear+1)%MAX_SIZE;
		}
		arr[rear] = x;
	}

void Dequeue()	{
		cout<<"Dequeuing \n";
		if(IsEmpty())	{
			cout<<"Error: Queue is Empty\n";
			return;
		}
		else if(front == rear ) {
			rear = front = -1;
		}
		else  {
			front = (front+1)%MAX_SIZE;
		}
	}

void display(){
		int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1; // Finding number of elements in queue  
		cout<<"\nQueue : ";
		for(int i = 1; i <count; i++)	{
			int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front
			cout<<arr[index]<<" ";
		}
		cout<<"\n";
	}
	
int main() {
	Enqueue(5);
	Enqueue(6);
	Enqueue(7);
	Enqueue(8);
	Enqueue(9);
	display();
	Dequeue();
	display();
} 
