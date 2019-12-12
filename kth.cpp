#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}
typedef long long int ll;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
void swap(int *a, int *b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

int partition(int a[], int low, int high){
	int pivot=a[high];
	int i=low-1;
	for(int j=low; j<=high-1;j++){
		if(a[j]<=pivot){
			i++;
			swap(&a[j],&a[i]);
		}
	}
	swap(&a[i+1],&a[high]);
	return i+1;
}

void quicksort(int a[], int low, int high){
	if(low<high){
		int pi= partition(a, low, high);
		quicksort(a, low,pi-1);
		quicksort(a, pi+1,high);
	}
}

int kthsmallest(int a[],int low, int high, int k){
	if(k>0 && high-low+1>=k){
		int pivot= partition(a,low,high);
		if(pivot-low==k-1) return a[pivot];
		 if(pivot-low<=k-1)
			return kthsmallest(a,pivot+1,high,k-pivot+low-1);
		else 
			return kthsmallest(a,low, pivot-1,k);

	}
	return INT_MAX;
}

int main()
{
	io;
	int t; cin>>t;
	while(t--){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int k;
	cin>>k;	
	//quicksort(a,0,n-1);
	cout<< kthsmallest(a,0,n-1,k)<<endl;
	//for(int i=0;i<n;i++) cout<<a[i]<<" ";
	}
	return 0;
}	