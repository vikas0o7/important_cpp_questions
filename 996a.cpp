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
	int sum=0;
	vector<int> v;
	v.pb(100);v.pb(20);v.pb(10);v.pb(5);v.pb(1);
	for(int i=0;i<5;i++){
		if(n>=v[i]){
			sum+=(n/v[i]);
			n=n%v[i];
		}
		else continue;
	}
	cout<<sum;
	return 0;
}	