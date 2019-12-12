#include<bits/stdc++.h>
using namespace std;

int cutRod(int price[], int n) {
	int val[n+1],ans;
	val[0]=0;
	for(int i=1;i<=n;i++){
		ans=INT_MIN;
		for(int j=0;j<i;j++){
			ans= max(ans, price[j]+val[i-j-1]);
		}
		val[i]=ans;
	}
	return val[n];
}

int main() 
{ 
	int arr[] = {3, 5, 8, 9, 10, 17, 17, 20}; 
	int size = sizeof(arr)/sizeof(arr[0]); 
	printf("Maximum Obtainable Value is \n %d\n", cutRod(arr, size)); 
	getchar(); 
	return 0; 
} 
