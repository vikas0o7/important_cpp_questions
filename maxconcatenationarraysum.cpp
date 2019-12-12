// C++ program to print largest contiguous 
// array sum when array is created after 
// concatenating a small array k times. 
#include<bits/stdc++.h> 
using namespace std; 

// Returns sum of maximum sum subarray created 
// after concatenating a[0..n-1] k times. 
int maxSubArraySumRepeated(int a[], int n, int k) 
{ 
	int ans=INT_MIN, temp=0; 

	for (int i = 0; i < n*k; i++)   // time complexity (n*k) space complexity( O(n));
	{ 
		// This is where it differs from Kadane's 
		// algorithm. We use modular arithmetic to 
		// find next element. 
		temp= temp+ a[i%n]; 
		if(temp>ans) ans=temp;
		if(temp<0) temp=0;
		}
		return ans;
} 

/*Driver program to test maxSubArraySum*/
int main() 
{ 
	int a[] = {10, 20, 30, -1}; 
	int n = sizeof(a)/sizeof(a[0]); 
	int k = 3; 
	cout << "Maximum contiguous sum is "
		<< maxSubArraySumRepeated(a, n, k); 
	return 0; 
} 
