/* Dynamic Programming solution to construct Longest 
Increasing Subsequence */
#include <iostream> 
#include <vector> 
using namespace std; 

// Utility function to print LIS 
void printLIS(vector<int>& arr) 
{ 
	for (int x : arr) 
		cout << x << " "; 
	cout << endl; 
} 

// Function to construct and print Longest Increasing 
// Subsequence 
void constructPrintLIS(int arr[], int n) 
{ 
	vector<vector<int> > L(n); 
	L[0].push_back(arr[0]); 
	for (int i = 1; i < n; i++) 
	{ 
		for (int j = 0; j < i; j++) 
		{ 
			if ((arr[i] > arr[j]) && 
				(L[i].size() < L[j].size() + 1)) 
				L[i] = L[j]; 
		} 

		// L[i] ends with arr[i] 
		L[i].push_back(arr[i]); 
	} 

	vector<int> max = L[0]; 
	for (vector<int> x : L) 
		if (x.size() > max.size()) 
			max = x; 

	// max will contain LIS 
	printLIS(max); 
} 

// Driver function 
int main() 
{ 
	int arr[] = { 3, 2, 6, 4, 15, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// construct and print LIS of arr 
	constructPrintLIS(arr, n); 

	return 0; 
} 
