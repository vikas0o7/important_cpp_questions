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
	ll n,x,y; cin>>n;
	vector<pair<ll, ll> > a;
	for(int i=0;i<n;i++){
		cin>>x;
		a.pb({x,i+1});
	}
	sort(a.begin(),a.end());
	if(n<=3){
		cout<< 1; return 0;
	}
	//for(auto it: a) cout<<it.first<<" ";
	bool flag=false;
	int temp, prev,i;
	set<ll> s;
	for( i=2;i<n;i++){
		
		s.insert(a[i].first-a[i-1].first);
		if(s.size()>1) {
			flag=true; break;
		}
	}
	if(flag==false && i==n){
		cout<<a[0].second; return 0;
	}
	 flag=false;
	prev=0; temp=INT_MAX;
	s.clear();
	for( i=1;i<n-1;i++){
		
		s.insert(a[i].first-a[i-1].first);
		if(s.size()>1){
			flag-true; break;
		}
	}
	if(flag==false && i==n-1){
		cout<< a[n-1].second; return 0;
	}
	ll diff= (a[n-1].first-a[0].first);
	if(diff% (n-2)!=0) {
		cout<<-1; return 0;
	}
	//for(auto i: a) cout<< i.second<<" ";
	diff= diff/(n-2);
	//cout<< diff<<endl;
	s.clear(); int ans; flag=false;
	for(int i=1;i<n;i++){
		if(a[i].first-a[i-1].first!=diff  && a[i+1].first-a[i-1].first==diff){
			cout<< a[i].second; return 0;
			//error(a[i].first-a[i-1].first, i);
		}
		//s.insert(a[i].first-a[i-1].first);
	}
	cout<<-1;
	return 0;
}	