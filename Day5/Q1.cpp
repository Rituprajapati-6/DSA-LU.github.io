/*
Write the function for insertion sort.
*/

#include <iostream> 
using namespace std; 

//FUNCTION FOR DISPLAY
void display(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << "  ";  
    cout << endl; 
}  

//FUNCTION FOR INSERTION SORT
void insertionSort(int arr[], int n)  
{  
    int i, k, j;  
    for (i = 1; i < n; i++) 
    {  
        k = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > k) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }
        arr[j + 1] = k;     
    }
}
  
int main()  
{  
    int arr[] = {5,3,8,2,6,4,5,2};  
    int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"\nOriginal array: \n";
    display(arr, n);
    insertionSort(arr, n);
	cout<<"\nSorted array:  \n";
    display(arr, n);
    return 0;  
}  
