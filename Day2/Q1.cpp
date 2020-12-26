//WRITE A PROGRAM FOR DELETING FROM BEGINNING AND FROM ANY POSITION

#include<iostream>
using namespace std;
int arr[30];
int n, i;

//TO DELETE ELEMENT AT THE INDEX OR BEGINNING OF AN ARRAY
void delelteBeginning(){
	cout<<"\nAfter deletion, ";
	for (i=0;i<n;i++){
	arr[i]=arr[i+1];
}
n--;
}

//TO DELETE ELEMENT AT THE GIVEN POSITION OF AN ARRAY
void deleteIndex(int ind){
	cout<<"\nAfter deleting element at "<<ind<<"position, ";
	for (i=ind;i<n;i++){
	arr[i]=arr[i+1];
}
n--;
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
delelteBeginning();
display();
deleteIndex(2);
display();
}
