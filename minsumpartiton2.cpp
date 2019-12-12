#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int minrec(int arr[], int i, int sum, int partitionsum){
    if(i==0)
    return abs((sum-partitionsum)-partitionsum);
    
    return min(minrec(arr,i-1, sum, partitionsum+arr[i-1]),
                minrec(arr,i-1,sum,partitionsum));
}
int fx(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return minrec(arr,n,sum,0);
}




int main()
 {
	int t; 
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<< fx(arr,n)<<endl;
	//cout<<sum<<endl;
	
	}
	return 0;
}