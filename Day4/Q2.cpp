/*
Question 2
Write the algorithm/function for Ternary Search.
*/

#include<iostream>
using namespace std;

int ternarySearch(int arr[], int start, int end, int k) {
   if(start <= end) {
      int mid1 = (start + (end - start) /3); 
      int mid2 = (end - (end - start) /3); 
      if(arr[mid1] == k)
         return mid1;
      if(arr[mid2] == k)
         return mid2;
      if(k < arr[mid1])
         return ternarySearch(arr, start, mid1-1, k);
      if(k > arr[mid2])
         return ternarySearch(arr, mid2+1, end, k);
      return ternarySearch(arr, mid1+1, mid2-1, k);
   }
   return -1;
}

int main() {
   int n, s, loc;
   cout << "Enter number of items: ";
   cin >> n;
   int arr[n]; 
   cout << "Enter items: " << endl;

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "Enter element to be searched : ";
   cin >> s;
   if((loc = ternarySearch(arr, 0, n, s)) >= 0)
      cout << "Item found at location: " << loc << endl;
   else
      cout << "Item not found" << endl;
}
