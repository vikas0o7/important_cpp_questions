#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
int coins(int* arr, int n){
	int table[n][n];
	for(int gap=0;gap<n;gap++){
		for(int i=0, j=gap; j<n;i++,j++){
			int x = ((i + 2) <= j) ? table[i + 2][j] : 0; 
			int y = ((i + 1) <= (j - 1)) ? table[i + 1][j - 1] : 0; 
			int z = (i <= (j - 2)) ? table[i][j - 2] : 0; 

			table[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z)); 								)
		}
	}
	return table[0][n-1];
}
// int coins(int* arr, int n) 
// { 
// 	// Create a table to store solutions of subproblems 
// 	int table[n][n]; 
// 	for (int gap = 0; gap < n; ++gap) {
// 		for (int i = 0, j = gap; j < n; ++i, ++j) { 
// 			int x = ((i + 2) <= j) ? table[i + 2][j] : 0; 
// 			int y = ((i + 1) <= (j - 1)) ? table[i + 1][j - 1] : 0; 
// 			int z = (i <= (j - 2)) ? table[i][j - 2] : 0; 

// 			table[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z)); 
// 		} 
// 	} 

// 	return table[0][n - 1]; 
// } 

// int coins(int* arr, int n){
// 		int table[n][n];
// 		int x,y,z;
// 		for (int gap = 0; gap < n; ++gap) {
// 		for (int i = 0, j = gap; j < n; ++i, ++j) { 
// 			if(i+2<=j) { x= table[i+2][j]; y= table[i+1][j-1];z= table[i][j-2];}
// 			else {table[i+2][j]=0;table[i+1][j-1]=0;table[i][j-2]=0;}



// 			table[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z)); 
// 		} 
// 	} 

// 	return table[0][n - 1]; 
// } 



int main()
{
	io;
	int t; 
	cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cout<<coins(arr,n)<<endl;	
	}
	return 0;
}	