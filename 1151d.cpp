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
typedef long long int nt;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;

bool cmp(pair<nt,pair<nt,nt>> &a, pair<nt,pair<nt,nt>> &b){
	//if((a.second.first-a.second.second!= b.second.first-b.second.second))
		return (a.second.first-a.second.second> b.second.first-b.second.second);
	//else return a.second.first>b.second.first;
}

int main()
{
	io;
	nt n,x,y;
	vector<pair <nt, pair<nt,nt> > > v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		v.pb({i,{x,y}});
	}
	sort(v.begin(),v.end(),cmp);
	nt ans=0;
	for(nt i=0;i<n;i++){
		ans+=(v[i].second.first)*(i)+ (v[i].second.second)*(n-1-i);
		//cout<< v[i].first+1<<endl;
	}
	cout<<ans;
	return 0;
}	