/*
Implement push, pop and find the minimum element in a stack in O(1) time complexity.
*/

#include <bits/stdc++.h> 
using namespace std; 

	stack<int> s; 
	int minEle; 

	void getMin() 
	{ 
		if (s.empty()) 
			cout << "Stack is empty\n"; 

		else
			cout <<"Minimum Element in the stack is: "
				<< minEle << "\n"; 
	} 

	void pop() 
	{ 
		if (s.empty()) 
		{ 
			cout << "Stack is empty\n"; 
			return; 
		} 

		cout << "Element Removed: "; 
		int t = s.top(); 
		s.pop(); 


		if (t < minEle) 
		{ 
			cout << minEle << "\n"; 
			minEle = 2*minEle - t; 
		} 

		else
			cout << t << "\n"; 
	} 

	void push(int x) 
	{ 

		if (s.empty()) 
		{ 
			minEle = x; 
			s.push(x); 
			cout << "Number Inserted: " << x << "\n"; 
			return; 
		} 

	
		if (x < minEle) 
		{ 
			s.push(2*x - minEle); 
			minEle = x; 
		} 

		else
		s.push(x); 

		cout << "Number Inserted: " << x << "\n"; 
	} 

int main() 
{
	push(31); 
	push(15); 
	getMin(); 
	push(2); 
	push(1); 
	getMin(); 
	pop(); 
	getMin(); 
	pop(); 
} 
