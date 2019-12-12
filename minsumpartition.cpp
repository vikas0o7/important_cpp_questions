// A Recursive C program to solve minimum sum partition 
// problem. 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find the minimum sum 
int findMinRec(int arr[], int i, int sumCalculated, int sumTotal) {
	if(i==0)
		return abs((sumTotal-sumCalculated)- sumCalculated);

	return 
		min(findMinRec(arr,i-1,sumCalculated+arr[i-1],sumTotal), 
			findMinRec(arr,i-1,sumCalculated, sumTotal));
}
 

// Returns minimum possible difference between sums 
// of two subsets 
int findMin(int arr[], int n) 
{ 
	// Compute total sum of elements 
	int sumTotal = 0; 
	for (int i=0; i<n; i++) 
		sumTotal += arr[i]; 

	// Compute result using recursive function 
	return findMinRec(arr, n, 0, sumTotal); 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = {36,7,46,40}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << "The minimum difference between two sets is "
		<< findMin(arr, n); 
	return 0; 
} 
