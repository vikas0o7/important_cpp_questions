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
int n, a[200005],mn=INT_MAX;
map<int,int> m;
int main()
{
	io;
	cin>>n;
	vector<int> v;
	v.push_back(1);
	int j=0;
	for(int i=0;i<n-1;i++){
		cin>>a[i];
		v.pb(a[i]+v[j]); j++;
		mn= min(mn,v[j]);
		//error(v[j])
		
	}
	if(mn<1){
		for(int i=0;i<v.size();i++){
			v[i]+=(-1*mn+1);

			//cout<< v[i]<<" ";
		}
	}
	for(int i=0;i<v.size();i++){
			m[v[i]]++;
		}
	for(int i=1;i<=n;i++){
		if(m.find(i)==m.end()) {
			cout<<-1; return 0;
		}
	}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
	return 0;
}	