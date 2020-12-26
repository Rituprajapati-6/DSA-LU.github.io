//WRITE A PROGRAM FOR PRINTING THE ARRAY AFTER ROTATING IT K TIMES TOWARDS LEFT, WHERE K WOULD BE TAKEN AS USER INPUT

#include<iostream>
using namespace std;
int arr[30];
int n, i;

//TO ROTATE THE ARRAY BY NO. OF TIMES INPUT BY USER
void rotate() {
	int k,j;
	cout<<"enter no. of rotations: ";
	cin>>k;
	cout<<"\nAfter rotating "<<k<<" times, ";
	for (j=0;j<k;j++){
	int temp = arr[0];
	for (i=0;i<n-1;i++){
		arr[i] = arr[i+1];
	}
	arr[i]=temp;
	}
}

//TO DISPLAY ELEMENTS OF THE ARRAY
display(){
	cout<<"Array is: ";
for (i =0; i<n; i++)
{
	cout<<arr[i]<<"  ";
}cout<<"\n";	
}

//DRIVER CODE
int main() {
	cout<<"enter size of arr: ";
	cin>>n;
	cout<<"Elements: ";
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	
display();
rotate();
display();
}
