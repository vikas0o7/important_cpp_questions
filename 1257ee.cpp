#include<bits/stdc++.h>
using namespace std;

const int N=2e5+100;
int a[N];
int main()
{
	int k1,k2,k3,x;
	cin>>k1>>k2>>k3;
	for(int i=1;i<=k1;i++) cin>>a[i];
	for(int i=k1+1;i<=k1+k2;i++) cin>>a[i];
	for(int i=k1+k2+1;i<=k1+k2+k3;i++) cin>>a[i];
	sort(a+1,a+1+k1);
	sort(a+1+k1,a+k1+k2+1);
	sort(a+1+k1+k2,a+k1+k2+k3+1);
	vector<int>ans;
	for(int i=1;i<=k1+k2+k3;i++)
	{
		//cout<<ans.size()<<" ";
		//for(auto j: ans) cout<< j<<" "; cout<<endl;
		auto p=lower_bound(ans.begin(),ans.end(),a[i]);
		//cout<< p-ans.begin()<<" ";
		// if(p!=ans.end()){
		// //	cout<<*p<<" "<<a[i]<<endl;
		// }
		if(p==ans.end()) ans.push_back(a[i]);
		else {*p=a[i];
		
		}//cout<<ans.size()<<endl;
	}
	cout<<k1+k2+k3-ans.size()<<endl;
	for(auto i:ans) cout<< i<<" ";
	return 0;
}