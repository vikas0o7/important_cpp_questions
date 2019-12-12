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
vector<int> v;
void divisor(int n){
	for(int i=1;i*i<=n;i++){
		if(n%i==0 ){
			v.push_back(i);
		}
	}
}
int main()
{
	io;
	ll n;
	cin>>n;
	divisor(n);
	int ans=n;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(v[i]>1 && v[i]<n ){
			ans=v[i];
		}
	}
	cout<<ans;
	return 0;
}	