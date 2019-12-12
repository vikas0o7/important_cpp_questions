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
int k,n,x;
vector<int> a;
vector<pair<int, pair<int,int> > > v;
int main()
{
	io;
	cin>>k;
	for(int j=0;j<k;j++){
		cin>>n;
		a.clear(); 
		//error(a.size())
		int sum=0;
		for(int i=0;i<n;i++){
			cin>> x;
			sum+=x;
			a.pb(x);
		}
		for(int i=0;i<n;i++){
			v.pb({sum-a[i],{j,i}});
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++){
		if(v[i].first==v[i+1].first && v[i].second.first!=v[i+1].second.first){
			cout<<"YES"<<endl;
			cout<< v[i].second.first+1<<" "<< v[i].second.second+1<<endl;
			cout<< v[i+1].second.first+1<<" "<< v[i+1].second.second+1<<endl;
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}	