/*
Question 1
Write a function to find the maximum element in the stack.
*/

#include<iostream>
using namespace std;
#define MAX_SIZE 101 

int arr[MAX_SIZE];
int top = -1;
int num;

void push( int arr[], int num ) {
if(top==MAX_SIZE-1){
	cout<<"stack is full \n";
}
else
{
top++;
arr[top] = num;
}
}

void pop(int arr[]){
	 int n;
	if(top==-1){
		cout<<"empty\n";
	}
	else
	{
		n=arr[top];
		top--;
	}
	cout<<"\ndeleted el:  "<< n;
}

void display(int arr[]){
	if(top==-1){
		cout<<"empty \n";
	}
	else
	cout<<"\nThe stack is: ";
	for (int i=top;i>=0;i--)
	{
		cout<<"  "<<arr[i];
	}
	cout<<endl;
}

void min(int arr[]){
	int e=0;
	if(top==-1){
		cout<<"empty \n";
	}
	else
	for (int i=0;i<=top;i++)
	{
		if(arr[i]<arr[e]){
			e=i;
		}
	}
	cout<<"\nMin:  "<<arr[e];
}

int main(){
	push(arr, 2);
	push(arr, 5);
	push(arr, 7);
	push(arr, 30);
	push(arr, 11);
	push(arr, 47);
	display(arr);
  min(arr);
	pop(arr);
	display(arr);
	min(arr);
}
