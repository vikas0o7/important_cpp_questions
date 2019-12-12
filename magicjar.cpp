#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long int ll;
int main()
{
	io;
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n; ll sum=0;
		for(int i=0;i<n;i++){
			cin>>x; sum+=x;
		}
		sum-=n; sum+=1;
		cout<<sum<<endl;
	}
	return 0;
}	