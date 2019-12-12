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
bool cmp(pair<char,int> &a,pair<char,int> &b){
	return a.second<b.second;
}
int main()
{
	io;
	int n; string s;
	cin>>n;cin>>s;
	map<int,int> r,g,b;
	for(int i=1;i<=n;i++){
		if(s[i-1]='R') r[i%3]++;
		else if(s[i-1]=='G') g[i%3]++;
		else b[i%3]++;
	}
	pair<int,int> l,m,n;
	int ans=-1;
	for(auto i: r){
		if(ans<i.second){
			l.first=i.first;
			l.second=i.second;
		}
	}
	for(auto i: g){
		if(ans<i.second){
			m.first=i.first;
			m.second=i.second;
		}
	}
	for(auto i: b){
		if(ans<i.second){
			b.first=i.first;
			b.second=i.second;
		}
	}
	// int indr=-1,indg=-1,indb=-1;
	// int x,y,z;
	// int mx=max(r.second,max(g.second,b.second));
	// int mn=min(r.second,min(g.second,b.second));
	// if(mx==r.second) {indr=r.first; x=indr;}
	// else if(mx==g.second) {indg=g.first; x=indg;}
	// else {indb= b.second; x=indb;} 
	vector<pair<char, int> > v;
	v.pb({'R',r.second});
	v.pb({'G',g.second});
	v.pb({'B',b.second});
	sort(v.begin(),v.end(),cmp);
	char x,y,z;
	// if(v[2].first=='R') indr= l.first;
	// else if(v[2].first=='G')indg= m.first;
	// else indb=n.first;
	
	return 0;
}	