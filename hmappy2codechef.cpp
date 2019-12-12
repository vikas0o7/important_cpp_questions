#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long int ll;
int main()
{
	io;
	int t;
	cin>>t; 
	while(t--){
		ll cnt=0,n,a,b,k; cin>>n>>a>>b>>k;
		ll x=(a*b)/__gcd(a,b); if(a>b) swap(a,b);
		ll com=  (n/x)-(b-1)/x;
		ll y= (n/b)-com;
		ll z= (n/a)-com;
		if(y+z>=k) cout<<"Win"<<'\n';
		else cout<<"Lose"<<'\n';
	}
	return 0;
}	