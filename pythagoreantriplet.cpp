#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
typedef pair<int,int> ii;
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int x;
		int a[n];
	//	memset(a,0,sizeof(n));
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i]*=a[i];
		}
	//	for(int i=0;i<n;i++) cin>>
		x=0;
		// for(int i=0;i<n;i++) cout<< a[i]<<" ";
		sort(a,a+n);
		int l=-1,r=-1;
	//	bool flag=false;
	   
		for(int i=n-1;i>=2;i--){
			l=0; r=i-1;
			//bool flag=false;
			while(l<r){
			    
				if(a[l]+a[r]==a[i]){
					cout<<"Yes"<<endl;
					x++;
					break;
				}
				else if(a[l]+a[r]<a[i]) l++;
				else r--;
			}
			if(x>0) break;
		}
		if(x==0) cout<<"No"<<endl;
	}
	return 0;
}	