#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
int n, a[26];
string s;
int main()
{
	io;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		a[s[0]-'a']++;
	}
	int ans=0;
	for(int i=0;i<26;i++){
		int x= a[i]/2;int y= a[i]-x;
		ans+= (x)*(x-1)/2 + (y)*(y-1)/2;
	}
	cout<<ans;
	return 0;
}	