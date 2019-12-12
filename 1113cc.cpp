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
int main()
{
	io;
		int n; cin>>n;
	int a;
	vector<int>v;
	v.pb(0);
	int temp=0;
	for(int i=0;i<n;i++){
		cin>>a;
		temp=temp^a;
		v.pb(temp);
	}
	map<int,int> cnt,odd,even;
	ll ans=0;
	for(int i=0;i<v.size();i++){
	    if(i%2==0) even[v[i]]++;
	    else odd[v[i]]++;
	}
	for(auto i: odd){
		ll x=i.second;
		if(x>0) ans=ans+ (x*(x-1))/2;
	}
	for(auto i: even){
		ll x=i.second;
		if(x>0) ans=ans+ (x*(x-1))/2;
	}
	cout<<ans;
	return 0;
}	

// if(odd[v[i]]>0 && i%2==1) ans++;
// 		else if(even[v[i]]>0 && i%2==0) ans++;
// 		else if(odd[v[i]]>0 && even[v[i]]>0) ans++;
// 		else if(odd[v[i]]==0 || even[v[i]]==0){
// 			if(i%2==1) odd[v[i]]++;
// 			else even[v[i]]++;
// 		}
		
// 	   error(v[i],odd[v[i]],even[v[i]])