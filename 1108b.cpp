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
vector<int> d;
void divisors(int x){
	for(int i=1;i<=sqrt(x);i++){
		if(x%i==0){
			if((x/i)!=i) {d.pb(x/i); d.pb(i);}
				else d.pb(i);
		}
	}
}
int main()
{
	io;
	int n; int p=1;
	cin>>n;
	vector<int>v(n);
	map<int,int> m;
	for(int i=0;i<n;i++) {cin>>v[i];
		p*=v[i];
		m[v[i]]++;
	}
	sort(v.begin(),v.end());
	int a= v[n-1];
	divisors(a);
	for(int i=0;i<d.size();i++){
		--m[d[i]];
	}
	vector<int> vec;
	for(auto i:m){
		if(i.second>0){
			vec.pb(i.first);
		}
	}
	sort(vec.begin(),vec.end());
	cout<<a<<" "<<vec[vec.size()-1];
	//for(auto i: d) cout<< i<<endl;
	return 0;
}	